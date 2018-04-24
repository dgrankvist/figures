#include <stdio.h>
#include "figs.h"

int main(void){
	int quit = 0;
	int userChoice;
	clearScreen();
	gotoxy(1, 1);
	while(quit == 0){
		userChoice = figMenu();
		if(userChoice == 1){
			triangle();
		}
		else if(userChoice == 2){
			circle();
		}
		else if(userChoice == 3){
			rectangle();
		}
		else if(userChoice == 4){
			square();
		}
		else if(userChoice == 5){
			horizLine();
		}
		else if(userChoice == 6){
			interLine();
		}
		else if(userChoice == 9){
			clearScreen();
			quit = 1;
		}
		else{
			quit = 0;
		}

	/*	switch(userChoice){
			case 1:
				triangle();
				break;
			case 2:
				circle();
				break;
			case 3:
				rectangle();
				break;
			case 4:
				square();
				break;
			case 5:
				horizLine();
				break;
			case 6:
				interLine();
				break;
			case 0:
				quit = 1;
				break;
			default:
				quit = 0;
				break;
		}
*/ 
	}
}
