#include <stdio.h>

int main(){
	int input;
	do{
	printf("1. Find out the Date\n");
	printf("2. Print out current Month\n");
	printf("3. Add a note\n");
	printf("4. Exit\n");
	scanf("%d",&input);

	switch(input){
	    case 1:
		    printf("You have chosen 1");
		    break;
	    case 2:
		    printf("You have chosen 2");
		    break;
	    case 3:
		    printf("You have chosen 3");
		    break;
	    case 3:
		    printf("Goodbye");
		    break;
	    default:
		    printf("Unknown command");
		    break;

		}
	}while(input != 4);

	return 0;
}

