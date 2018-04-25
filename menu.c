#include <stdio.h>
#include <stdlib.h> // for atoi()
#include <string.h> // for strlen()
#include "figs.h"

int figMenu(void){
	int i, choice, userin;
	// char userin;
	gotoxy(1,1);
	for(i=0;i<60;i++){
		printf("-");
	}
	// print "logo"
	setColor(RED);
	printf("\nFFFFFF  ");
	setColor(GREEN);
	printf("II   ");
	setColor(YELLOW);
	printf("GGG  ");
	setColor(BLUE);
	printf("UU  UU  ");
	setColor(MAGENTA);
	printf("RRR   ");
	setColor(CYAN);
	printf("EEEEEE  ");
	setColor(WHITE);
	printf("SSS\n");
	setColor(RED);
	printf("FF      ");
	setColor(GREEN);
	printf("II  ");
	setColor(YELLOW);
	printf("GG    ");
	setColor(BLUE);
	printf("UU  UU  ");
	setColor(MAGENTA);
	printf("RR RR ");
	setColor(CYAN);
	printf("EE     ");
	setColor(WHITE);
	printf("SS\n");
	setColor(RED);
	printf("FFFFFF  ");
	setColor(GREEN);
	printf("II ");
	setColor(YELLOW);
	printf("GG  GG ");
	setColor(BLUE);
	printf("UU  UU  ");
	setColor(MAGENTA);
	printf("RRRR  ");
	setColor(CYAN);
	printf("EEEEEE  ");
	setColor(WHITE);
	printf("SSS\n");
	setColor(RED);
	printf("FF      ");
	setColor(GREEN);
	printf("II ");
	setColor(YELLOW);
	printf("GG   G ");
	setColor(BLUE);
	printf("UU  UU  ");
	setColor(MAGENTA);
	printf("RR R  ");
	setColor(CYAN);
	printf("EE        ");
	setColor(WHITE);
	printf("SS\n");
	setColor(RED);
	printf("FF      ");
	setColor(GREEN);
	printf("II  ");
	setColor(YELLOW);
	printf("GGGG   ");
	setColor(BLUE);
	printf("UUUU   ");
	setColor(MAGENTA);
	printf("RR  R ");
	setColor(CYAN);
	printf("EEEEEE  ");
	setColor(WHITE);
	printf("SSS\n\n");
	
	//print menu options
	setColor(RED);
	printf("1: Triangle\n");
	setColor(GREEN);
	printf("2: Circle\n");
	setColor(YELLOW);
	printf("3: Rectangle\n");
	setColor(BLUE);
	printf("4: Square\n");
	setColor(MAGENTA);
	printf("5: Horizontal line\n");
	setColor(CYAN);
	printf("6: Intersecting lines\n");
	setColor(WHITE);
	printf("9: Exit\n");
	gotoxy(20, 0);
	for(i=0;i<60;i++){
		printf("-");
	}
	printf("\n");
	setColor(BGWHITE);
	setColor(BLACK);
	printf("Please make your choice and press ENTER: ");
	setColor(0); // reset settings
	userin = getchar();
	choice = userin - '0';
	printf("\n");
	printf("\n");
	if((choice > 0) && (choice < 10))
		return choice;
	else
		return 0;
}

