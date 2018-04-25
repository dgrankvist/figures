#include <stdio.h>
#include "figs.h"

void interLine(void){
	setColor(CYAN);
	gotoxy(8,35);
	printf(" **                  **  \n");
	gotoxy(9,35);
	printf("   **              **    \n");
	gotoxy(10,35);
	printf("     **          **      \n");
	gotoxy(11,35);
	printf("       **      **        \n");
	gotoxy(12,35);
	printf("         **  **          \n");
	gotoxy(13,35);
	printf("           **            \n");
	gotoxy(14,35);
	printf("         **  **          \n");
	gotoxy(15,35);
	printf("       **      **        \n");
	gotoxy(16,35);
	printf("     **          **      \n");
	gotoxy(17,35);
	printf("   **              **    \n");
	gotoxy(18,35);
	printf(" **                  **  \n");
	setColor(0); // reset color
}
