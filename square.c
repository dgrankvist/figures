#include <stdio.h>
#include "figs.h"

void square(void){
	setColor(BLUE);
	int i;
	for(i=0;i<12;i++){
		gotoxy(i+8,35);
		printf(" *********************** \n");
	}
	setColor(0); // reset color
}
