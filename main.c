#include <stdio.h>
#include "figs.h"

int main(void){
	int quit = 0;
	int userChoice;
	while(quit == 0){
		userChoice = figMenu();
		switch(userChoice){
			case '1':
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

	}
}
