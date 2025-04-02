#include<ncurses.h>

int main(int argc , char** argv){

	//ncurses start 
	initscr();
	noecho();
	cbreak();

	//Get screen size 
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	//Create a window for our input
	WINDOW* inputwin = newwin(3,xMax-12, yMax-5, 5);
	box(inputwin,0,0);
	refresh();
	wrefresh(inputwin);

	keypad(inputwin, true); //allows charectors like KEY_UP and what not.
	
	int input = wgetch(inputwin);
	if(input == KEY_UP){
		mvwprintw(inputwin, 1,1, "You pressed UP!");
		wrefresh(inputwin);
	}
	else{
		mvwprintw(inputwin, 1,1 , "You did not press UP!");
		wrefresh(inputwin);
	}
	//make sure program waits before exiting
	getch();
	endwin();
	//ncurses end
	
	return 0;


}
