#include <iostream>

/*
printf()
%i, %d integers
%c character
%s string
%p pointer address

*/

int main(){

	for (int i = 0; i < 200; ++i){
		printf("ASCII Value : %d\tCharacter: %c\t, Pointer Address: %p\n", i, i, &i);
	}
}
