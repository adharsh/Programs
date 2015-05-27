#include <stdio.h>

int main( ){

	//char* a = "Hello";
	int b = -1;
		
		while( b != 128 ){
			b++;
			printf( "%d %x: %c\n", b, b, b );
		}

}
