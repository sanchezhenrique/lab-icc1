#include <stdio.h>

void leituraVetor(int n, int *p);
void verificaBombas(int n, int bombas[], int indices[]);
void imprimeVetor(int n, int vet[]);

int main (){
  int n;
  scanf("%d", &n);

  int bombas[n];
  leituraVetor(n, bombas);

  int indices[n];

  verificaBombas(n, bombas, indices);

  imprimeVetor(n, indices);

  printf("\n");
}

void leituraVetor(int n, int *p){
  for(int i = 0; i < n; i++){
    scanf("%d", p);
    p++;
  }
}

void verificaBombas(int n, int bombas[], int indices[]){
  int *indiceOriginal = indices;
  for(int i = 0; i < n; i++){
    indices[i] = 0;

    if(i > 0)
      indices[i] += bombas[i - 1];

    indices[i] += bombas[i];

    if(i < n - 1){
      indices[i] += bombas[i + 1];
    }
  }
}

void imprimeVetor(int n, int vet[]){
  for(int i = 0; i < n; i++){
    printf("%d ", vet[i]);
  }
}