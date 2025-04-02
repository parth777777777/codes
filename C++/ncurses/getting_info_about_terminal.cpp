#include <ncurses.h>

int main(int argc , char** argv){
	initscr();
	noecho();
	cbreak();

	int y,x, yBeg , xBeg , yMax , xMax;
	
	WINDOW* win = newwin(10,10,20,10);

	//Returns current cursor coordinates
	getyx(stdscr, y, x);
	//getyx(win, y,x);
	//Returns beginning coordinates
	getbegyx(stdscr, yBeg, xBeg);
	// returns max coordinates
	getmaxyx(stdscr, yMax, xMax);

	printw("%d %d %d %d %d %d", y,x, yBeg , xBeg , yMax , xMax);
	getch();

}
