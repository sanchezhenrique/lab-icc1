#include <stdio.h>
#include <stdlib.h>

int** alocaMatrizInt(int linhas, int colunas);
void lerMatriz(int **ptr, int linhas, int colunas);
void adicionaBonus(int **ptrNotas, int **ptrBonus, int linhas, int colunas);
void liberaMemoriaMatriz (int** ptr, int linhas, int colunas);
void imprimeMatriz(int** ptr, int linhas, int colunas);

int main (){
  int n, m;
  scanf("%d %d", &n, &m);

  int** ptrNotas = alocaMatrizInt(n, m);
  if(ptrNotas == NULL){
    printf("Erro ao alocar memoria!");
    exit(1);
  }

  lerMatriz(ptrNotas, n, m);

  int** ptrBonus = alocaMatrizInt(n, m);
  if(ptrBonus == NULL){
    printf("Erro ao alocar memoria!");
    exit(1);
  }
  lerMatriz(ptrBonus, n, m);

  adicionaBonus(ptrNotas, ptrBonus, n, m);
  
  liberaMemoriaMatriz(ptrBonus, n, m);

  imprimeMatriz(ptrNotas, n, m);

  liberaMemoriaMatriz(ptrNotas, n, m);
  return(0);
}

int** alocaMatrizInt(int linhas, int colunas){ 
  int** N = (int**) malloc(linhas * sizeof(int*));
  if(N == NULL){
    return(N);
  }

  for(int i = 0; i < linhas; i++){
    N[i] = (int*) malloc(colunas * sizeof(int));
    if(N[i] == NULL){
      for(int j = 0; j < i; j++){
        free(N[j]);
      }
      free(N);
      N = NULL;
      break;
    }
  }
  return (N);
}

void lerMatriz(int **ptr, int linhas, int colunas){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      scanf("%d", &ptr[i][j]);
    }
  }
}

void adicionaBonus(int **ptrNotas, int **ptrBonus, int linhas, int colunas){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(ptrNotas[i][j] + ptrBonus[i][j] >= 100){
        ptrNotas[i][j] = 100;
      } else{
        ptrNotas[i][j] += ptrBonus[i][j];
      }
    }
  }
}

void liberaMemoriaMatriz (int** ptr, int linhas, int colunas){
  for(int i = 0; i < linhas; i++){
    free(ptr[i]);
  }
  free(ptr);
}

void imprimeMatriz(int** ptr, int linhas, int colunas){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }
}