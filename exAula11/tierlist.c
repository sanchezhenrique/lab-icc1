#include <stdio.h>
void contarNotas(char notas[], int frequencia[]);
char encontraModa(int frequencia[]);

int main (){
  char notas[200];
  int frequencia[26] = {0};
  scanf("%s", notas);
  contarNotas(notas, frequencia);
  char moda = encontraModa(frequencia);

  printf("%c\n", moda);
}

void contarNotas(char notas[], int frequencia[]){
  for(int i = 0; notas[i] != '\0'; i++){
    frequencia[notas[i] - 'A']++;
  }
}

char encontraModa(int frequencia[]){
  int maior = 0;
  for(int i =0; i < 26; i++){
    if(frequencia[i] > frequencia[maior]){
      maior = i;
    }
  }
  return maior + 'A';
}