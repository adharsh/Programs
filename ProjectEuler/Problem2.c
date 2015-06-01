#include <stdio.h>

int main(){

	int stop = 1;
	int a = 0;
	int b = 1;
	int counter = 0;
	while(stop){
		int temp = b;
		b = a + b;
		a = temp;

		if(b > 4000000)
			stop = 0;

		if(b%2 == 0 && stop == 1)
			counter += b;
	}
	
	printf("%d\n", counter);

}