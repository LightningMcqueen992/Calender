#include <stdio.h>

int main(){
	int input;
	do{
	printf("1. Find out the Date\n");
	printf("2. Print out current Month\n");
	printf("3. Add a note\n");
	printf("4. Exit\n");
	scanf("%d",&input);
	}while(input != 4);

	return 0;
}

