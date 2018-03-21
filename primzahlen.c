#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int valInput, valInput2;
	int i = 2;
	int contvar;

	if(argc == 2){
		//reading variable	
		valInput = atof(argv[1]);
		valInput2 = valInput/2+1;
	
		/* as its enough to check if the half of our input number is a factor of the number, we only check till the half + 1 to compensate for uneven numbers */

		if(valInput == 0){
			printf("0 is not a prime number\n");	
		} else {
			//while loop for looping through numbers
			while(i <= valInput2){
				int c=valInput%i;
				if(c==0){
					printf("%i isnt a prime number\n",valInput);
					contvar = 1;
					break;
				}
			i++;
			}
			if(contvar == 0){
				printf("%i is a prime number\n",valInput);
			}
		} 
	} else {
		printf("You have to call a parameter with this function\n");
	}
		
	return 0;
}

