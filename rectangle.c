/*
 * Rectangle drawing function
 * Input argument: none
 * Output argument: none
 */

#include <stdio.h>
#include "figs.h"

void rectangle(void){
	setColor(YELLOW);
	// draw the rectangle (8 lines of asterisks) in specified position
	int i;
	for(i=0;i<8;i++){
		gotoxy(i+10,35);
		printf(" *********************** \n");
	}
	setColor(0); // reset color
}
