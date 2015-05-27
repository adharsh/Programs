#include <stdio.h>
#include <string.h>

int main(){

  char *names[] = {"Google", "Amazon", "Toshiba", "Sony"};
  
  printf("\n");
  for(int i = 0; i < strlen(names); i++)
    printf("names[%d]: %s\n",i,names[i]);
  printf("\n");
}
