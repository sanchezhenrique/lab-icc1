#include <stdio.h>

int main(){
  unsigned int tipo;
  double massa, total;

  scanf("%u %lf", &tipo, &massa);

  switch(tipo){
    case 1:
      total = 100 + (10 * massa);
      if(massa > 500){
        total *= 1.2;
      }
      break;

    case 2:
      if(massa > 100){
        total = 60;
      }
      else{
        total = 50;
      }
      break;

    case 3:
      total = 0;
      break;
      
    default:
      printf("Tipo inválido!");
      return 0;
  }

  printf("Tarifa: %.2lf", total);

}