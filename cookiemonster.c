#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	initscr();
	here:
	addstr("GIVE ME COOKIES");
	char* in = scanf("s");
	if (strcmp(in, "cookies") == 0){
		addstr("Thank you :3");
		endwin();
		exit();
	} else { goto here; } 
}
