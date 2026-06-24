#include <stdio.h>
#include <stdlib.h>

int main (){
  int tamanho, minimo;
  scanf("%d %d", &tamanho, &minimo);
  for(int i = 0; i < tamanho; i++){
    int qtdLinha = 0;
    for(int j = 0; j < tamanho; j++){
      int x;
      scanf("%d", &x);
      if(x == 1) qtdLinha++;
    }
    if(qtdLinha < minimo){
      printf("Nao\n");
      return 0;
    }
  }
  printf("Sim\n");
}