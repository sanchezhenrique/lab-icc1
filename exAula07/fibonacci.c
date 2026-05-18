#include <stdio.h>

int main (){
  int n;
  scanf("%d", &n);
  long long int vet[n + 1];
  vet[0] = 0;
  vet[1] = 1;

  for(int i = 2; i <= n; i++){
    vet[i] = vet[i - 1] + vet[i - 2];
  }
  printf("%lld\n", vet[n]);
}