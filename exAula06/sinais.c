#include <stdio.h>

int main (){
  int nDecimal = 0, tam = 0;
  long long soma = 0;
  char palavra[200], resultado[200];

  scanf("%s", palavra);
  
  // Conversao Ternario -> Decimal
  for(int i = 0; palavra[i] != '\0'; i++){
    nDecimal = nDecimal * 3 +(palavra[i] - '0');
  }
  
  //Leitura e soma das palavras dados
  for(int i = 0; i < nDecimal; i++){
    long long valor = 0;

    scanf("%s", palavra);
    for(int i = 0; palavra[i] != '\0'; i++){
      valor = valor * 3 +(palavra[i] - '0');
    }

    soma += valor;
  }

  //Conversao soma para ternario
  if(soma == 0){
    printf("0\n");
  } else {
    long long temp = soma;

    while( temp > 0){
      resultado[tam] = '0' + (temp % 3); 
      temp /= 3;
      tam++;
    }

    //Impressao na ordem correta
    for(int i = tam-1; i >=0; i--){
      printf("%c", resultado[i]);
    } 
    printf("\n");
  }
}