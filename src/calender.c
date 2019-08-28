#include <stdio.h>
#include <ctype.h>
#include "../include/header.h"

int main(){

	char input[10];
	char *p_input;
	int option;

	do{
	printf("1. Find out the Date\n");
	printf("2. Print out current Month\n");
	printf("3. Add a note\n");
	printf("4. Exit");
	scanf("%s",input);
	
	p_input = input;

	if( isdigit(input[0]) ){
	  printf("It is a digit\n");
	  option = *p_input - '0' ;
	}
	else{
	    continue;
	}
	
	printf("%d",option);
	switch(option){
	    case 1:
		    printf("You have chosen 1\n");
		    option_1();
		    break;
	    case 2:
		    printf("You have chosen 2\n");
		    break;
	    case 3:
		    printf("You have chosen 3\n");
		    break;
	    case 4:
		    printf("Goodbye\n");
		    break;
	    default:
		    printf("Unknown command\n");
		    break;

		}
	}while(option != 4);

	return 0;
}

