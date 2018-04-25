#include <stdio.h>
#include "figs.h"

void rectangle(void){
	setColor(YELLOW);
	int i;
	for(i=0;i<8;i++){
		gotoxy(i+10,35);
		printf(" *********************** \n");
	}
	setColor(0); // reset color
}
