#include <stdio.h>
#include "Date.cpp"
//#include "Date.hpp"

class DateDriver{
public:
	static int main(){

		Date obj = Date( 5, 30, 2015 );
		printf( "Date: %d %d, %d\n", obj.getMonth(), obj.getDay(), obj.getYear() );
		return 0;
	}
};

int main(){

	printf("About to Be Executed:\t");
	
	printf("It Will Still Be Executed: \t%d\n", DateDriver::main());
	return -1;
}

