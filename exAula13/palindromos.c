/* Exericico Palindromos
Se o tamanho da palavra é par, todos os caracteres devem aparecer um número par de vezes.
Se o tamanho da palavra é ímpar, no máximo um caractere pode aparecer um número ímpar de vezes.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int n;
  scanf("%d", &n);
  char *str = (char*) malloc(sizeof(char) * n + 1);
  scanf(" %s", str);
  int letras[26] = {0};
  int impares =  0;

  for(int i = 0; str[i] != '\0'; i++){
    letras[str[i] - 'a']++;
  }

  for(int i = 0; i < 26; i++){
    if(letras[i] % 2 != 0) impares++;
  }

  if(impares >= 1) printf("NAO\n");
  else printf("SIM\n");

  free(str);
}