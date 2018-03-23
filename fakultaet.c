#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a,b;
	b = 1;
	int i = 1;

	if(argc == 2){
	//reading variable	
	a = atof(argv[1]);
	if(a == 0){
		printf("The factorial of %i is %i\n",a,b);
	} else if(a < 0){
		printf("The factorial of a negative number is not defined.\n");
	} else {
		//while loop for factorial
		while(i <= a){
			b *= i;
			i++;
		}
	printf("The factorial of %i is %i\n",a,b);
	}
	} else {
		printf("Please call the programm with 1 integer value\n");
	}
	return 0;
}

//the computer does calculate the factorial corectly until 13
