/*
 * Includes functions that manipulate the terminal window output
 */

#include <stdio.h>
#include "figs.h"

/* change foreground of terminal window to specified color (e.g. setColor(RED))
 * if color is prefixed by BG (e.g., BGRED), background color is changed instead
 * (see available colors in figs.h)
 * use setColor(0) to reset all settings to default.
 * Input argument: int color (chosen color for VT-100 escape sequence)
 * Output argument: none
 */
void setColor(int color){
	printf("%c[1;%dm", ESC, color);
	fflush(stdout);
}

/* Clear the terminal window.
 * Input argument: none
 * Output argument: none
 */
void clearScreen(void){
	printf("%c[2J", ESC);
	fflush(stdout);
}

/* Move cursor to specified location in terminal window.
 * Input arguments:
 * 		int row: row in terminal window to move to
 * 		int col: column in terminal window to move to
 */
void gotoxy(int row, int col){
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}

	
