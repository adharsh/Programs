#include <stdio.h>
#include <math.h>

int main(){
	
	double num;
	printf("Enter Number: ");
	scanf("%lf", &num);

	for(double i = 1000000; i > 1; i--){
		if( fmod(num,i) == 0){
			num = i;
			break;		
		}
	//	printf("Iteration %lf\n", i);
	}

	printf("Largest Prime Factor: %lf\n", num);
	return -1;
}