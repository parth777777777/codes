#include <cmath>
#include <ctime>
#include <iostream>
#include <chrono>
#include <termios.h>
#include<unistd.h>

bool running = false;

class stopwatch{
private:
	std::chrono::high_resolution_clock::time_point start_time;
public:
	void start(){
		start_time = std::chrono::high_resolution_clock::now();
		running = true;
	}

	double stop(){
		if(!running) return 0.0;
		else{
		auto stop_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop_time - start_time);
		running = false;
		return duration.count()/1000.0;
		}
	}
};

char getKeyPress(){
	struct termios oldt , newt;
	char ch;
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO );
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW , &oldt);
	return ch;
}
int menu(){
	int input;
	std::cout<<"1.Start"<<"\n"<<"2.Quit"<<"\n";
	std::cin>>input;
	//ignore input buffer , code doesnt work without this ,
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if(input == 1 || input == 2) return input;
	else {
		std::cout<<"ERROR: INVALID INPUT, TRY AGAIN\n";
		sleep(1);
		menu();
	}
	return 0;
}
int main(){
	int choice = menu();
	if (choice == 2) return 0;
	stopwatch sw;
	system("clear");
	std::cout<<"started!\n";
	srand(time(NULL));
	int random = 10*sin(rand());
	sleep(random);
	system("clear");
	std::cout<<"shoot!\n";
	sw.start();
	while(running) {
		int key = getKeyPress();
		if(key != EOF && key != 0) break;
	}
	auto reaction_time = sw.stop();
	printf("%0.4f ms\n",reaction_time);
	return 0 ;
}


