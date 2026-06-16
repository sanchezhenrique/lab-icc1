#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cadastroPessoa(char **vetor, int cadastros, int *qtdBytes){
  char nome[31];
  scanf(" %30[^\n]", nome);
  int tamanho = strlen(nome);
  *qtdBytes += tamanho + 1;
  vetor[cadastros] = (char*) malloc(sizeof(char) * (tamanho + 1));
  strcpy(vetor[cadastros], nome);
  cadastros++;
  return cadastros;
}

int realocaVetor(char ***vetor, int tamanhoVetor, float k){
  tamanhoVetor *= k;
  *vetor = realloc(*vetor, tamanhoVetor);
  return tamanhoVetor;
}

void removePessoa(char **vetor, int cadastros, int *qtdBytes){
  int tamanho = strlen(vetor[cadastros]);
  *qtdBytes -= (tamanho + 1);
  free(vetor[cadastros]);
  vetor[cadastros] = NULL;
}

void liberaMatriz(char** matriz, int linhas){
  for(int i = 0; i < linhas; i++){
    free(matriz[i]);
  }
  free(matriz);
}

int main(){
  int n;
  scanf("%d", &n);
  char **nomes = (char**) malloc(sizeof(char*));
  int tamanhoVetor = sizeof(char*), cadastros = 0, qtdBytes = 0;
  for(int i = 0; i < n; i++){
    int opcao;
    scanf("%d", &opcao);

    switch (opcao){
      case 1:
        if(cadastros >= tamanhoVetor/sizeof(char*)){
          tamanhoVetor = realocaVetor(&nomes, tamanhoVetor, 2.0f);
          printf("Realocacao\n");
        } else{
          printf("-\n");
        }
        cadastros = cadastroPessoa(nomes, cadastros, &qtdBytes);
      break;

      case 2:
        if(cadastros !=0){
          cadastros--;
          printf("%s ", nomes[cadastros]);
          removePessoa(nomes, cadastros, &qtdBytes);
          if(cadastros > 0 && cadastros <= tamanhoVetor/ (sizeof(char*)*2) ){
            tamanhoVetor = realocaVetor(&nomes, tamanhoVetor, 0.5f);
            printf("Realocacao\n");
          }
          else{
            printf("-\n");
          }
        } else {
          printf("-\n");
        }
      break;

      case 3:
        printf("%d\n", tamanhoVetor + qtdBytes);
      break;
    }
  }
  liberaMatriz(nomes, tamanhoVetor / sizeof(char*));
  nomes = NULL;
}