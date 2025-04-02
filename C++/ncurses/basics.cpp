#include <ncurses.h>

int main(int agrc, char** argv){
	//initializes the screen 
	//sets up memoery and clears the screen 
	initscr();

	//prints a string(const char* ) to a window.
	printw("Hello World!");

	//refreshes the screen to match whats in memory
	refresh();
	
	//waits for user input and return int value of that key
	int input = getch();
	printw("\n%d",input);
	getch();

	endwin(); 
	//deallocates memory and ends ncurses. 
	
	return 0;
}
