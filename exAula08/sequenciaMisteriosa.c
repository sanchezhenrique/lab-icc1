//2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768
// Divide-se em 3 sequencias
// 2, 4, 8, 16, 32 (a1,a4,a7,a10,a13) % 3 = resto 0
// 7, 21, 63, 189, 567 (a2, a5, a8, a11, a14) % 3 = resto 1
// 3, 12, 48, 192, 768 % 3 = resto 2
#include <stdio.h>

int main (){
  int n;
  long long valor;
  scanf("%d", &n);
  n--;
  switch(n%3){
    case 0:
      valor = 2;
      n /=3; //posicao na subsquencia
      for(int i = 0; i < n; i++){
        valor *=2;
      }
      break;

    case 1:
      valor = 7;
      n /=3; //posicao na subsquencia
      for(int i = 0; i < n; i++){
        valor *=3;
      }
      break;

    case 2:
      valor = 3;
      n /=3; //posicao na subsquencia
      for(int i = 0; i < n; i++){
        valor *=4;
      }
      break;
  }

  printf("%lld\n", valor);
}