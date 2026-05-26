#include <stdio.h>

void inverter(char *inicio, char *fim);
void decodificar(char *frase);

int main (){
  char frase[201];

  scanf(" %[^\n]", frase);
  decodificar(frase);

  printf("%s\n", frase);

}

void decodificar(char *frase){
  char *inicio = frase;
  char *fim = frase;

  while(1){

    if(*fim == ' ' || *fim == '\0'){
      inverter(inicio, fim - 1);

      if(*fim == '\0'){
        break;
      }

      inicio = fim + 1;
    }
    fim++;
  }
}

void inverter(char *inicio, char *fim){
  while(inicio < fim){
    char temp = *inicio;
    *inicio = *fim;
    *fim = temp;
    inicio++;
    fim--;
  }
}