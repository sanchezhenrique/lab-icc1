#include <stdio.h>
#include <stdlib.h>



void preencheLinha(char *Vet, int colunas, int *xA, int *xB, int *yA, int *yB, int linha){
  for(int i = 0; i < colunas; i++){
    scanf(" %c", &Vet[i]);
    if(Vet[i] == 'A'){
      *xA = linha;
      *yA = i;
    }
    if(Vet[i] == 'B'){
      *xB = linha;
      *yB = i;
    }
  }
}

char** alocaMatrizVariada(int linhas, int **colunas, int *xA, int *xB, int *yA, int *yB){
  char **M = (char**) malloc(sizeof(char*) * linhas);
  if(M == NULL){
    exit(1);
  }

  *colunas = (int*) malloc(sizeof(int) * linhas);
  if(*colunas == NULL){
    free(M);
    exit(1);
  }

  for(int i = 0; i < linhas; i++){
    scanf("%d", &(*colunas)[i]);
    M[i] = (char*) malloc(sizeof(char) * ((*colunas)[i]));

    if(M[i] == NULL){
      free(*colunas);
      for(int j = 0; j < i; j++){
        free(M[j]);
      }
      free(M);
      exit(1);
    }

    preencheLinha(M[i], (*colunas)[i], xA, xB, yA, yB, i);
  }
  return M;
}

int posicaoValida(int x, int y, int linhas, int *colunas){
  if(x < 0 || x >= linhas){
    return 0;
  }

  if(y < 0 || y >= colunas[x]){
    return 0;
  }
  return 1;
}

// Otimização Possivel
int movimentosJogo(char **M, int linhas, int *colunas, int xA, int xB, int yA, int yB){
  int qtdMovimentos = 0;
  int dxAnterior = 0, dyAnterior = 0;
  while(xA != xB || yA != yB){

    if(posicaoValida(xA, yA + 1, linhas, colunas) && M[xA][yA + 1] != '#' && dyAnterior != -1){ //Direita
      while(posicaoValida(xA, yA + 1, linhas, colunas) && M[xA][yA + 1] != '#'){
        yA++;
      }
      dxAnterior = 0;
      dyAnterior = 1;
      qtdMovimentos++;
      continue;
    }

    if(posicaoValida(xA, yA - 1, linhas, colunas) && M[xA][yA - 1] != '#' && dyAnterior != 1){ //Esquerda
      while(posicaoValida(xA, yA - 1, linhas, colunas) && M[xA][yA - 1] != '#'){
        yA--;
      }
      dxAnterior = 0;
      dyAnterior = -1;
      qtdMovimentos++;
      continue;
    }

    if(posicaoValida(xA + 1, yA, linhas, colunas) && M[xA +1][yA] != '#' && dxAnterior != -1){ //Baixo
      while(posicaoValida(xA + 1, yA, linhas, colunas) && M[xA + 1][yA] != '#'){
        xA++;
      }
      dyAnterior = 0;
      dxAnterior = 1;
      qtdMovimentos++;
      continue;
    }

    if(posicaoValida(xA - 1, yA, linhas, colunas) && M[xA - 1][yA] != '#' && dxAnterior != 1){ //Cima
      while(posicaoValida(xA - 1, yA, linhas, colunas) && M[xA - 1][yA] != '#'){
        xA--;
      }
      dyAnterior = 0;
      dxAnterior = -1;
      qtdMovimentos++;
      continue;
    }
  }
  return qtdMovimentos;
}

void liberaMemoria(char **M, int linhas, int *colunas){
  free(colunas);
  for(int i = 0; i < linhas; i++){
    free(M[i]);
  }
  free(M);
}


int main(){
  int *colunas, n, xA, xB, yA, yB;
  scanf("%d", &n);
  char **M = alocaMatrizVariada(n, &colunas, &xA, &xB, &yA, &yB);
  int movs = movimentosJogo(M, n, colunas, xA, xB, yA, yB);
  printf("%d\n", movs);
  liberaMemoria(M, n, colunas);
}