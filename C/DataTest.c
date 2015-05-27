#include <stdio.h>

int main(){
	printf("Starting Up\n");	
	
	int a=10;
	char s[]="This is a String test";
	printf("Printing out integer: ");
	printf("%i",a);
	printf("\n");

	printf("Printing out a string using for loops:\n");
	int i;
	for(i=0;i<sizeof(s);i++){
		printf("%c",s[i]);
	}
	printf("\n");
	
	printf("Printing out a String without for loops:\n");
	printf("%s",s);
	printf("\n");
	
	int intTest[5]={1,-1,0,a,30000};
	printf("Printing out an integer array:\n");
	int j;
	for(j=0; j<5;j++){
		printf("%i",intTest[j]);
		printf(" , ");
	}

	printf("%i \n", r;
	
	return 0;
}