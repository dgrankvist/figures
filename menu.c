/*
 * Menu function
 * Input argument: none
 * Output argument: 
 * 		int choice (if user inputs a single-digit integer)
 * 		int 0 (if user inputs something else)
 * If user inputs 0, 7, 8 or something other than a single-digit
 * integer, the while loop in the main function will run this 
 * function again.
 */

#include <stdio.h>
#include "figs.h"

int figMenu(void){
	int i, choice, userin;
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
	userin = getchar(); // take first input from stdin
	choice = userin - '0'; // convert ASCII character to integer
	printf("\n");
	printf("\n");
	// if a single-digit integer is given, return it. Else return 0.
	if((choice > 0) && (choice < 10))
		return choice;
	else
		return 0;
}

