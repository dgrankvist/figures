/*
 * Main function
 */

#include <stdio.h>
#include "figs.h"

int main(void){
	int quit = 0;
	int userChoice;
	clearScreen();
	gotoxy(1, 1);
	while(quit == 0){
		// call function figMenu(), store the return value in variable userChoice
		userChoice = figMenu();
		if(userChoice == 1){
			clearScreen();
			triangle();
		}
		else if(userChoice == 2){
			clearScreen();
			circle();
		}
		else if(userChoice == 3){
			clearScreen();
			rectangle();
		}
		else if(userChoice == 4){
			clearScreen();
			square();
		}
		else if(userChoice == 5){
			clearScreen();
			horizLine();
		}
		else if(userChoice == 6){
			clearScreen();
			interLine();
		}
		else if(userChoice == 9){
			clearScreen();
			quit = 1;
		}
		else{
			quit = 0;
		}
	}
}
