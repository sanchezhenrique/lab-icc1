#include <stdio.h>
#define N 3 // linhas
#define M 3 // colunas
void lerMatriz(double matriz[N][M]);
void lerVetor(double vetor[M]);
double det2x2(double a, double b, double c, double d);
double det3x3(double m[3][3]);
void matrizCofatores(double m[3][3], double cof[3][3]);
void trasposta(double original[3][3], double modificada[3][3]);
void inversa(double matrizOriginal[3][3], double matrizInversa[3][3]);
void multiplicaMatrizVetor(double matriz[N][M], double vet[N], double resultado[N]);
void imprimeVetor(double vetor[N]);

int main(){
  double matrizBase [N][M], vetor[N], resultado[N];
  lerVetor(vetor);
  lerMatriz(matrizBase);
  double matrizInversa[N][M];
  inversa(matrizBase, matrizInversa);
  multiplicaMatrizVetor(matrizInversa, vetor, resultado);
  imprimeVetor(resultado);
}

void lerMatriz(double matriz[N][M]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      scanf("%lf", &matriz[i][j]);
    }
  }
}
void lerVetor(double vetor[N]){
  for(int i = 0; i < N; i++){
    scanf("%lf", &vetor[i]);
  }
}

void imprimeVetor(double vetor[N]){
  for(int i = 0; i < N; i++){
    printf("%.3lf ", vetor[i]);
  }
}

double det2x2(double a, double b, double c, double d){
  return a * d - (b * c);  
}
double det3x3(double m[3][3]){
  return(
    m[0][0] * det2x2(m[1][1],m[1][2],m[2][1],m[2][2])
    - m[0][1] * det2x2(m[1][0],m[1][2],m[2][0],m[2][2])
    + m[0][2] * det2x2(m[1][0],m[1][1],m[2][0],m[2][1])
  );
}

void matrizCofatores(double m[3][3], double cof[3][3]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      // Matriz menor (2x2) obtida ao remover
      // a linha i e a coluna j
      double menor[N-1][M-1];

      int l2 = 0; // Índice da linha da matriz menor

      for(int l = 0; l < N; l++){
        // Ignora a linha que será removida
        if(l == i) continue;
        // Índice da coluna da matriz menor
        int c2 = 0;
        for(int c = 0; c < M; c++){
          // Ignora a coluna que será removida
          if(c == j) continue;
          // Copia elemento para a matriz menor
          menor[l2][c2] = m[l][c];
          c2++;
        }
          l2++;
        }
    // Calcula o determinante da matriz menor
      cof[i][j] = det2x2(menor[0][0], menor[0][1], menor[1][0], menor[1][1]);
      // Aplica o sinal do cofator:
      if((i + j) % 2 != 0)
        cof[i][j] *= -1;
    }
  }
}

void trasposta(double original[3][3], double modificada[3][3]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      modificada[i][j] = original[j][i];
    }
  }
}

void inversa(double matrizOriginal[3][3], double matrizInversa[3][3]){
  double cofatores[N][M];
  double adjunta[N][M];

  matrizCofatores(matrizOriginal, cofatores);
  trasposta(cofatores, adjunta);

  double det = det3x3(matrizOriginal);

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      matrizInversa[i][j] = adjunta[i][j] / det;
    }
  }
}

void multiplicaMatrizVetor(double matriz[N][M], double vet[N], double resultado[N]){
  for(int i = 0; i < N; i++){
    resultado[i] = 0;
    for(int j = 0; j < M; j++){
      resultado[i] += matriz[i][j] * vet[j];
    }
  }
}