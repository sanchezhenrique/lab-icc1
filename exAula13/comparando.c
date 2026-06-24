#include <stdio.h>

int main(){
  char string1[1001], string2[1001];
  scanf(" %1000[^\n]", string1);
  scanf(" %1000[^\n]", string2);

  for(int i = 0; string1 != '\0' || string2[i] != '\0'; i++){
    if(string1[i] - string2[i] > 0){
      printf("%s\n", string2);
      break;
    } else if(string1[i] - string2[i] < 0){
      printf("%s\n", string1);
      break;
    }
  }
}