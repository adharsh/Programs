#include <stdio.h>
//using namespace std;

int substraction();

int subtraction (int a, int b){
  int r;
  r = a - b;
  return r;
}	

int main (){
  int x=6, y=33, z;
  z = subtraction(x,y);

  printf("Hello World\n");
  printf("Number = 5: right? %i\n", z);

}