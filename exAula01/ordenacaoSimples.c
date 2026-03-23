#include <stdio.h>

int main (){
  int a, b, c;
  int temp = 0 ;
  scanf("%d %d %d", &a, &b, &c);
  if(a == b || b == c || a == c){
    printf("Erro: os numeros devem ser distintos.");
    return 0;
  }
  // Se 'a' for maior que 'b', troca os valores para garantir a < b
  if(a > b){
    temp = a;
    a = b;
    b = temp;
  }
  // Se 'a'(antigo b) for maior que 'c', troca para garantir a < c
  if(a > c){
    temp = a;
    a = c;
    c = temp;
  }
  // Se 'b' for maior que 'c', troca para garantir b < c
  if(b > c){
    temp = c;
    c = b;
    b = temp;
  }
  printf("%d %d %d", a, b, c);
}