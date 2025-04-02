#include <ncurses.h>

int main(int argc , char** argv){
	initscr();
	cbreak(); //dont really understand what this does
	//raw(); //takes all input as raw input . doesnt take special charectors like ^C to exit
	noecho(); //whatever input user types doenst echo to terminal
	//
	//create a window
	int height ,width , start_x , start_y;
	height = 10 ;
	width = 25;
	start_x = 0;
	start_y = 0;
	WINDOW* win = newwin(height,width ,start_y , start_x);
	refresh();
	
	// NOTE: print a box , its draws a outline on a window. 
	box(win,0,0); //the two int parameters are what charectors we want to use for left&right border and top&bottom border
	//box(win,104,103); // for eg , this has h and g as corresponding borders
	//print within the window , this function move curses within given window and then prints
	
	// if we really want to customize the borders:
	//wborder(win , left , right , top , bottom , tlc , trc , blc , brc);
	mvwprintw(win,1,1, "I am inside the window"); 
	// wprintw() can also be used .
	//refresh window
	wrefresh(win);

	int c = getch();

	endwin();
}
