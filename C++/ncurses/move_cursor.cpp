#include <ncurses.h>


int main(int argc, char** argv){
	initscr();
	//move the cursor using move function
	//move(y,x) in move function y coordinate is defined first.
	move(12,45);
	printw("Hello Meow!\n");

	int input = getch();
	clear(); //clears the screen
	//move print function 
	mvprintw(0,0,"%d",input);

	getch();

	endwin();
}
