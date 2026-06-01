#include <stdio.h>

long long ternarioParaDecimal(char palavra[]);
int contaOcorrencias(long long sinal[], int N, long long padrao[], int M) ;

int main (){
  char palavra[50];
  int ocorrencias;
  scanf("%s", palavra);
  int N = (int)ternarioParaDecimal(palavra);
  long long sinal[N+1];

  // Lê e converte as N palavras do sinal 
  for (int i = 1; i <= N; i++) {
    scanf("%s", palavra);
    sinal[i] = ternarioParaDecimal(palavra);
  }
  
  // Lê o tamanho do padrão 
  int M;
  scanf("%d", &M);
  long long padrao[M];

  /* Lê o padrão em decimal */
  for (int i = 0; i < M; i++) {
    scanf("%lld", &padrao[i]);
  }
  
  printf("%d\n", contaOcorrencias(sinal, N, padrao, M));
}

long long ternarioParaDecimal(char palavra[]) {
    long long valor = 0;


    for (int i = 0; palavra[i] != '\0'; i++) {
        valor = valor * 3 + (palavra[i] - '0');
    }

  return valor;
}

int contaOcorrencias(long long sinal[], int N, long long padrao[], int M) {
  int ocorrencias = 0;
  /* Testa cada posição possível de início do padrão */
  for (int i = 1; i <= N - M + 1; i++) {
    int encontrou = 1;
    /* Compara os elementos do padrão */
    for (int j = 0; j < M; j++) {
      if (sinal[i + j] != padrao[j]) {
        encontrou = 0;
        break;
      }
    }
    if (encontrou) {
      ocorrencias++;
    }
  }
  return ocorrencias;
}