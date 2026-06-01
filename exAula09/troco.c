#include <stdio.h>
void leituraVet(int n, int vet[]);

int main (){
  int n, c;
  scanf("%d %d", &n, &c);

  int moedas[n];
  leituraVet(n, moedas);

  int *pInicio = moedas, *pFim = moedas + n -1;

  while (pInicio < pFim)
  {
    int soma = *pInicio + *pFim;

    if(soma == c){
      printf("%d %d\n", *pInicio, *pFim);
      return 0;
    }

    else if(soma < c){
      pInicio++;
    } else{
      pFim--;
    }
  }
  
  printf("Sem troco exato.\n");
  return 0;
}

void leituraVet(int n, int vet[]){
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
}