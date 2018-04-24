#include <stdio.h>
#include "figs.h"

void circle(void){
	gotoxy(15, 0);
	setColor(GREEN);
	printf("           ***            \n");
	printf("        *********         \n");
	printf("      *************      \n");
	printf("     ***************     \n");
	printf("    *****************    \n");
	printf("    *****************    \n");
	printf("    *****************    \n");
	printf("     ***************     \n");
	printf("      *************      \n");
	printf("        *********        \n");
	printf("           ***           \n");
	printf("                         \n");
	setColor(0); // reset color
}
