#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float valA;

	// reading of the input
	valA = atof(argv[1]);


	// checkung if number is positive or negative
	
	if(valA > 0){
		printf("Your input: %f is positive\n",valA);
	} else if (valA < 0){
		printf("Your input: %f is negative\n",valA);
	} else {
		printf("Your input: %f is exacly 0\n",valA);
	}
	return 0;
}
