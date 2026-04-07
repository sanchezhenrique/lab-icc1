#include <stdio.h>

int main(){
  char tipo;
  int Xi, Xf, Yi, Yf, dx, dy;

  scanf("%c %d %d %d %d", &tipo, &Xi, &Yi, &Xf, &Yf);

  switch (tipo){
    case 'T':
      if((Xi == Xf && Yi != Yf) || (Xi != Xf && Yi == Yf)){
        printf("Movimento valido");
      }
      else{
        printf("Movimento invalido");
      }
      break;

    case 'B':
      dx = Xi - Xf;
      dx *= dx; // quadrando para ignorar o sinal

      dy = Yi - Yf;
      dy *= dy; // quadrando para ignorar o sinal

      if(dx == dy){
        printf("Movimento valido");
      }
      else{
        printf("Movimento invalido");
      }
      break;
  }

}