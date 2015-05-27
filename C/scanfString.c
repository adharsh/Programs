int main(){

  char word[10];
  char sentance[1000];
  // Initialize Strings:
  // char *str1 = "apple";
  // char str2[10]; strcpy (str2,"To be ");
  printf("Enter a string: ");
  
  for(int i = 0; i < 20; i++){
    scanf("%s", &word);
    strncat(sentance,word,10);
  }  
  printf("String Entered: %s\n", sentance);

}
