#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	initscr();
	here:
	addstr("GIVE ME COOKIES");
	char* in = scanf("s");
	if (*in == "cookies"){
		addstr("Thank you :3");
		endwin();
		exit();
	} else { goto here; } 
}
