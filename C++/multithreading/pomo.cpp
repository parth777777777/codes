#include<iostream>
#include<chrono>
#include<thread>
#include<termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <atomic>

#define s 1000000
std::atomic<bool> paused(false);
std::atomic<bool> running(true);

int interval_d = 25;
int break_d = 5;

void print_menu(){
	std::cout<<"Select : "<<std::endl<<"1. start pomodoro "<<std::endl<<"2. configure "<<std::endl<<"3. Quit "<<std::endl;
}
void configure(int* interval_d , int* break_d){
	std::cout<<"enter interval duration(m) : "<<std::endl;
	std::cin>>*interval_d;
	std::cout<<"enter break duration(m) : "<<std::endl;
	std::cin>>*break_d;
	std::cout<<"Updated durations successfully!"<<std::endl;
}

void menu(){
	int choice;
	std::cout<<"=> ";
	std::cin>>choice;
	switch(choice){
		case 1:
			break;
		case 2:
			configure(&interval_d,&break_d);
			break;
		case 3:
			break;
		default:
			std::cout<<"ERROR: INVALID INPUT TRY AGAIN"<<std::endl;
			menu();
	}
}

bool kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return ch;
    }

    return 0;
}
void active_timer(int active_seconds){
	auto start_time = std::chrono::steady_clock::now();
	for(int i = active_seconds; i>0 ; i--){
		auto next_time = start_time + std::chrono::seconds(seconds - i + 1);
		std::cout<<"Time left : "<<i<<" seconds"<<std::endl;
		std::this_thread::sleep_until(next_time);
	}
	std::cout<<"Time's up!"<<std::endl;
}

void get_input(){}

int main(){
	print_menu();
	menu();
	int active_seconds = interval_d*60;
	int break_seconds = break_d*60;
	std::thread timer_worker(active_timer, active_seconds);
	std::thread kbinput_worker(get_input);
}
