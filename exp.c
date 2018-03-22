#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	double xval;
	int n =50;
	double xcalc = 1.0;
	long factorial=1;
	double result=1.0;
	int i = 1;
	int j = 1;

	if(argc == 2){
		xval = atof(argv[1]);

		while(i<=n){
			//factorial
			factorial = i * factorial;		

			//powerseries
			while(j<=i){
				xcalc = xcalc*xval;
			j++;
			}
//		printf("%e\n",xcalc);
//		printf("%ld\n",factorial);
		result=result + xcalc/factorial;
//		printf("%e\n",result);
		i++;
		}
	printf("exp(%e)=%e\n",xval,result);


	} else {
		printf("You have to call the function with a float value for x\n");
	}
	return 0;
}

