#include <stdio.h>
#include "figs.h"

void triangle(void){
	gotoxy(15, 0);
	setColor(RED);
	printf("            *            \n");
	printf("           ***           \n");
	printf("          *****          \n");
	printf("         *******         \n");
	printf("        *********        \n");
	printf("       ***********       \n");
	printf("      *************      \n");
	printf("     ***************     \n");
	printf("    *****************    \n");
	printf("   *******************   \n");
	printf("  *********************  \n");
	printf(" *********************** \n");
	setColor(0); // reset color
}
