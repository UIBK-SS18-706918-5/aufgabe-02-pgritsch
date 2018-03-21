#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a;
	long b = 1;
	int i = 1;

	if(argc == 2){
	//reading variable	
	a = atof(argv[1]);
	if(a == 0){
		printf("The factorial of %i is %ld\n",a,b);
	} else if(a < 0){
		printf("The factorial of a negative number is not defined.\n");
	} else {
		//while loop for factorial
		while(i <= a){
			b = i*b;
			i++;
		}
	printf("The factorial of %i is %ld\n",a,b);
	
	}
	} else {
		printf("Please call the programm with 1 integer value\n");
	}
	printf("Anzahl der Bytes von zahl: %i\n", sizeof(b));	
	return 0;
}

//the computer does calculate the factorial corectly until 20 for variable type long
