#include <stdio.h>

int main (){
  char posicao[3], mensagem[101];
  scanf(" %s %s", posicao, mensagem);

  for(int i = 0; mensagem[i] != '\0'; i += 2){
    if(mensagem[i] == posicao[0] && mensagem[i+1] == posicao[1]){
      printf("Fomos atingidos! \n");
      return 0;
    }
  }

  printf("Oceano tranquilo! \n");
}