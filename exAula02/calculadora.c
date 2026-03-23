#include <stdio.h>

int main(){
  int a,b;
  float resultado;
  char operador;
  scanf("%d %d %c", &a, &b, &operador);
  if(operador == '+'){
    printf("%d", a + b);
  }
  else if(operador == '-'){
    printf("%d", a - b);
  }
  else if(operador == '*'){
    printf("%d", a * b);
  }
  else if(operador == '/'){
    if(b == 0){
      printf("Erro: divisao por zero");
    }
    else{
    printf("%.2f", (float) a / b);
    }
  }
  else{
    printf("Erro: operacao invalida");
  }
}
