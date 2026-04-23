#include <stdio.h>

int main (){
  char s1[19], s2[19];
  scanf("%s", s1);
  scanf("%s", s2);

  for(int i = 0; i < 19; i++){
    if(s1[i] != s2[i]){
      printf("Nao sou eu \n");
      return 0;
    }
  }

  printf("Sou eu \n");
}