#include <stdio.h>

int main (){
  char string[200];
  int qtdMiku = 0, qtdTeto = 0;
  scanf("%s", string);

  for(int i = 0; string[i] != '\0'; i ++){
    if(string[i] == 'T' && string[i+1] =='E' && string[i+2] == 'T' && string[i+3] == 'O'){
      qtdTeto++;
    } else if (string[i] == 'M' && string[i+1] =='I' && string[i+2] == 'K' && string[i+3] == 'U'){
      qtdMiku++;
    }
  }

  if(qtdTeto == qtdMiku){
    printf("Empate\n");
  } else if(qtdTeto > qtdMiku){
    printf("Teto\n");
  } else{
    printf("Miku\n");
  }
}