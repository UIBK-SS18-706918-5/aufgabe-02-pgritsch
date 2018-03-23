#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	long double xval;
	int n =1000;
	long double xcalc = 1.0;
	long double factorial=1;
	long double result=1.0;
	int i = 1;
	int j = 1;

	if(argc == 2){
		xval = atof(argv[1]);

		while(i<=n){
			//factorial
			factorial *= i;		

			//powerseries
			while(j<=i){
				xcalc *= xval;
			j++;
			}
		result += xcalc/factorial;
		i++;
		}
	printf("exp(%Lf)=%Lf\n",xval,result);


	} else {
		printf("You have to call the function with a float value for x\n");
	}
	return 0;
}

