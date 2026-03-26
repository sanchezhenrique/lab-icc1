#include <stdio.h>

int main(){
  char num[5];
  int resultado;
  scanf("%s", num);
  
  resultado = (num[0] - '0') * 27; // 3 elevado a 3 potência
  resultado += (num[1] - '0') * 9; // 3 elevado a 2 potência
  resultado += (num[2] - '0') * 3; // 3 elevado a 1 potência
  resultado += (num[3] - '0') * 1; // 3 elevado a 0 potência

  printf("%d\n", resultado);
}