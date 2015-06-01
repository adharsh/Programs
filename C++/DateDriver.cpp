#include <stdio.h>
#include "Date.h"

int main(){

	Date obj = Date( 5, 30, 2015 );
	printf( "Date: %d %d, %d\n", obj.getMonth(), obj.getDay(), obj.getYear() );

}