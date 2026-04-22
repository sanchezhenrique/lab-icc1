#include <stdio.h>
#include <math.h>

int main(){
  double a, b, c, raiz1, raiz2, delta;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = (b * b) -(4 * a * c);
  
  if(delta < 0){
    printf("Não há raízes reais. \n");
  } else if (delta == 0){
    raiz1 = -b / (2 * a);
    printf("Raiz: %.3lf \n", raiz1);
  }
  else{
    raiz1 = ( -b - sqrt(delta) ) / (2 * a);
    raiz2 = ( -b + sqrt(delta) ) / (2 * a);
    printf("Raízes: %.3lf %.3lf \n", raiz1, raiz2);
  }
}