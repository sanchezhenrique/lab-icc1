#include <stdio.h>

int main (){
  int treinamento[26][26] = {0};
  int n;
  scanf("%d", &n);
  char frase[n + 1];
  scanf("%s", frase);

  for(int i = 0; i < n -1; i++){
    int atual = frase[i] - 'a';
    int prox  = frase[i + 1] - 'a';
    treinamento[atual][prox]++;
  }

  int m;
  scanf("%d", &m);
  char c;
  scanf(" %c", &c);

  printf("%c", c);

  for(int i = 0; i < m; i++) {
    int linha = c - 'a';
    int maior = 0;
    for(int j = 1; j < 26; j++) {
      if(treinamento[linha][j] > treinamento[linha][maior]) {
        maior = j;
      }
    }

    treinamento[linha][maior]--;

    c = 'a' + maior;

    printf("%c", c);
}

printf("\n");
}
