//Fundamental Types, Constants, and Variables

#include <iostream>  // Declaration of cin and cout
#include <cstdlib>
//using namespace std;
int main(){
	// Prototypes of srand(), rand():
	// void srand( unsigned int seed );
	// int rand( void );
	unsigned int seed;
	int z1, z2, z3;
	std::cout << "   --- Random Numbers  --- \n" << std::endl;
	std::cout << "To initialize the random number generator, "
	<< "\n please enter an integer value: ";
	std::cin  >> seed;
	srand(seed);
	z1 = rand();
	z2 = rand();
	z3 = rand();
	// Input an integer
	// and use it as argument for a
	// new sequence of random numbers.
	// Compute three random numbers.
	std::cout << "\nThree random numbers: "
	<< z1 << "   " << z2 << "   " << z3 << std::endl;

	std::string test = "Hello World\n";
	std::cout << test << std::endl << std::endl;

	std::string message("Hello "), prompt("What is your name: "), name, line(40,'-');

	std::cout << prompt;
	getline(std::cin, name);
	std::cout << std::endl << message << name << std::endl;
	std::cout << "Your name is " << name.length() - 1 << " characters long!\n"; 

	return 0; 
}

/*
#include <iostream>
#include <climits> 
using namespace std;


unsigned larger 0 - large number
signed
Boolean: 0 or 1
	bool
Characters:
	char
	wchar_t
Integers:
	short
	int
	long
Floating Point Values:
	float (4 bytes) simple accuracy
	double (8 bytes) double accuracy
	long double (10 bytes) high accuracy

	char <= short <= int <= long
Strings have \0 at end
Empty Strings of "" actually have one byte
Escape Sequences:
	/t
	/"
	/'
	/b
	/?
	//
To continue a string in the next line you can also use a backslash \ 
as the last character in a line, and then press the Enter key to begin a new line, where you can continue typing the string.
"I am a very, very \
 long string"

Within a program "names" are used to designate variables and functions. 
using namespace std;

const is final

volatile means variable can be changed outside of program by outside events including its own program
const volatile means only outisde programs can change

prototype is function declaration

srand() produces different sequences of rand()
input to srand(2234) gives a different sequence of rand() numbers
rand() before srand() is the same thing as srand(1)


Header Files: #include directive declarations and macros can be made available to any other source file, even in other header files.
■ header files should generally be included at the start of a program before any other declarations
■ you can only name one header file per #include directive
■ the file name must be enclosed in angled brackets < ... > or double quotes
Header files with sdfas.h are from C
Header files without it are from C++

*/

/*
int main2(){
	
	cout << "Range of types int and unsigned int"
		<< endl << endl;
	cout << "Type Minimum Maximum"
		<< endl
		<< "--------------------------------------------"
		<< endl;
	cout << "int " << INT_MIN << " "
		<< INT_MAX << endl;
		cout << "unsigned int " << " 0 "
		<< UINT_MAX << endl;

		cout << "sizeof(int)" << sizeof(int) << endl;

		int a(5);
		int b = 6;
		cout << "a: " << a << ", b: " << b << endl;

		const int c = 3;
		//c = 6;
		cout << "c: " << c << endl;

	return 0;
}
*/