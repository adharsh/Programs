//Fundamentals

#include <iostream>
using namespace std;

void line(), message(); //Protoypes

/*
cout displays characters to the console
<< pushes characters out onto the stream
endl moves cursor to the next line

must declare methods as above

#include <filename> 
includes files, basically copies and pasted
function used comes from the std namespace

Predefined names in C++ are to be found in the std (standard) namespace. 
The using directive allows direct access to the names of the std namespace.
*/

int main(){

	cout << "Hello World\n" << endl;
	line();
	message();
	return 0;
}

void line(){
	cout << "--------------------------------" << endl;
}

void message(){
	cout << "message() called";
}

void messageOther( ){ 
	cout <<
	"In function message()." <<
	endl;}
	//actually displays whats happening