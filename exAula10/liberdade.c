#include <stdio.h>

int main (){
  int n, soma = 0;
  scanf("%d", &n);

  int vet[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }

  int *inicio = vet, *fim = vet + n -1;

  while(inicio <= fim){
    soma += (*inicio) * (*fim);

    inicio++;
    fim--;
  }

  printf("%d", soma);
}