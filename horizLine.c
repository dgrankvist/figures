#include <stdio.h>
#include "figs.h"

void horizLine(void){
	setColor(MAGENTA);
	gotoxy(12,35);
	printf(" *********************** \n");
	gotoxy(13,35);
	printf(" *********************** \n");
	setColor(0); // reset color
}
