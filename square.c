/*
 * Square drawing function
 * Input argument: none
 * Output argument: none
 */

#include <stdio.h>
#include "figs.h"

void square(void){
	setColor(BLUE);
	// draw the square (12 lines of asterisks) in specified position
	int i;
	for(i=0;i<12;i++){
		gotoxy(i+8,35);
		printf(" *********************** \n");
	}
	setColor(0); // reset color
}
