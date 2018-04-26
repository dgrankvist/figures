/*
 * Horizontal line drawing function
 * Input argument: none
 * Output argument: none
 */

#include <stdio.h>
#include "figs.h"

void horizLine(void){
	setColor(MAGENTA);
	// draw the line in specified position
	gotoxy(12,35);
	printf(" *********************** \n");
	gotoxy(13,35);
	printf(" *********************** \n");
	setColor(0); // reset color
}
