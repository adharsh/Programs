// sintab.cpp
// Creates a sine function table
#include <iostream>
#include <iomanip>
#include <cmath>

#define PI
#define START
#define END
#define STEP  (PI / 8.0)
#define HEADER   (cout << \
3.1415926536
0.0 (2.0 * PI)
// Lower limit
// Upper limit
// Step width
"  *****  Sine Function Table *****\n\n")
int main() {
  HEADER;                        // Title
                                 // Table Head:
  cout << setw(16) << "x" << setw(20) << "sin(x)\n"
  << "   -----------------------------------------"
  << fixed << endl;
  double x;
  for( x = START; x < END + STEP/2; x += STEP)
  	cout << setw(20) << x << setw(16) << sin(x)
  << endl;
  cout << endl << endl;
  return 0;