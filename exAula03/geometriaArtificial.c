#include <stdio.h>
#include <math.h>

int main(){
  double xP, yP, zP, xC, yC, zC, raio, distanciaCentro;
  scanf("%lf %lf %lf", &xP, &yP, &zP); 
  scanf("%lf %lf %lf", &xC, &yC, &zC); 
  scanf("%lf", &raio);
  distanciaCentro = sqrt(pow(xP - xC, 2) + pow(yP -yC, 2) + pow(zP - zC, 2));

  if(distanciaCentro > raio){
    printf("externa");
  }
  else if(distanciaCentro < raio){
    printf("interna");
  }
  else{
    printf("pertence");
  }
}