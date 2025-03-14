#include<iostream>
#include<chrono>
#include<thread>
#include<termios.h>
#include<unistd.h>
#include<fcntl.h>
#include<atomic>

std::atomic<bool> paused(false);
std::atomic<bool> running(true);

void timer(int seconds) {
    while(seconds > 0 && running) {
        if(!paused) {
            system("clear");
            std::cout << "Seconds left: " << seconds << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            seconds--;
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    if(running) std::cout << "Time's up!" << std::endl;
}
long get_duration(){
	long hours,seconds,minutes;
	std::cout<<"Input duration of timer : \n";
	std::cout<<"Hours : ";
	std::cin>>hours;
	std::cout<<"Minutes : ";
	std::cin>>minutes;
	std::cout<<"Seconds : ";
	std::cin>>seconds;
	return (hours*60*60)+(minutes*60)+(seconds);
}

char getKeyPress() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

void get_input(){
	while(running){
		int key = getKeyPress();
		if(key){
			if(key == ' '){
				paused = !paused;
				std::cout<<"\n "<<(paused ? "Timer paused" : "Timer resumed")<<"\n";
			}
			else if(key == 'q'){
				running = false;
			}
		}
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Reduce CPU usage
}
int main(){
	long duration = get_duration();
	//std::cout<<duration<<"\n";
	std::thread timer_thread(timer,duration);
	std::thread input_thread(get_input);
	timer_thread.join();
	running = false;
	input_thread.join();
	return 0;
}
