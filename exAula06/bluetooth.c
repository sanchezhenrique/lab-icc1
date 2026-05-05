#include <stdio.h>

int main (){
  int n;
  long long int x, *b, *c;

  scanf("%d %lld", &n, &x);
  b = &x;
  c = &x;

  for(int i = 0; i < n; i++){
    char p, operador;
    long long int *ponteiro, valor;
    scanf(" %c %c %lld", &p, &operador, &valor);
    if(p == 'B'){
      ponteiro = b;
    } 
    else {
      ponteiro = c;
    }

    switch (operador)
    {
    case '+':
      *ponteiro += valor;
      break;

    case '-':
      *ponteiro -= valor;
      break;

    case '*':
      *ponteiro *= valor;
      break;

    case '/':
      if(valor == 0){
        break;
      }
      else{
        *ponteiro /= valor;
      }
    }
  }

  printf("%lld\n", x);
}