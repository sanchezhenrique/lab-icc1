#include <stdio.h>

int main(){
  int n, posicao, m, saldo = 0;

  scanf("%d %d %d", &n, &posicao, &m);
  int casas[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &casas[i]);
  }
  
  for(int j = 0; j < m; j++){
    int temp;
    scanf("%d", &temp);
    posicao = (posicao + temp) % n;

    saldo += casas[posicao];
  }

  printf("%d", saldo);
}