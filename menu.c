#include <stdio.h>
#include "figs.h"

int figMenu(void){
	int i, choice;
	int scanStat; // for checking if scanf executed correctly
	for(i=0;i<50;i++){
		printf("-");
	}
	printf("\nFIGURES\n");
	printf("1: Triangle\n");
	printf("2: Circle\n");
	printf("3: Rectangle\n");
	printf("4: Square\n");
	printf("5: Horizontal line\n");
	printf("6: Intersecting lines\n");
	printf("0: Exit\n");
	printf("Please make your choice and press ENTER: ");
	scanStat = scanf("%d", &choice); 
	for(i=0;i<50;i++){
		printf("-");
	}
	printf("\n");
	if(scanStat != 1)
		return 7;
	else
		return choice;
}

