#include <stdio.h>
#include "figs.h"

void setColor(int color){
	printf("%c[1;%dm", ESC, color);
	fflush(stdout);
}

void clearScreen(void){
	printf("%c[2J", ESC);
	fflush(stdout);
}

void gotoxy(int row, int col){
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}

	
