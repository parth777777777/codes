#include <ncurses.h>

int main(int argc , char** argv){
	initscr();
	if(!has_colors()){
		printw("Terminal doesnt support colour");
		getch();
		return -1;
	}
	start_color();
	/* NOTE: COLORS
	 * COLOR_PAIR(n)
	 * COLOR_BLACK		0
	 * COLOR_RED		1
	 * COLOR_GREEN		2
	 * COLOR_YELLOW		3
	 * COLOR_BLUE		4
	 * COLOR_MAGENTA	5
	 * COLOR_CYAN		6
	 * COLOR_WHITE		7
	 * */
	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);

	if(can_change_color()){
		printw("can change color\n");
		init_color(COLOR_BLACK, 000, 000, 000); // rgb values go 0-999. 
	}

	/* NOTE: ATTRIBUTES
	 * A_NORMAL
	 * A_STANDOUT
	 * A_REVERSE
	 * A_BLINK
	 * A_DIM
	 * A_BOLD
	 * A_PROTECT
	 * A_INVIS
	 * A_ALTCHARSET
	 * A_CHARTEXT
	 */
	attron(COLOR_PAIR(1));
	printw("This is cool ");
	attroff(COLOR_PAIR(1));

	getch();

	endwin();
}
