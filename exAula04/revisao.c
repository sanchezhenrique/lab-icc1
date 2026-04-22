#include <stdio.h>

int main (){
  double uA, uB, uC, vA, vB, vC, razao;
  scanf("%lf %lf %lf", &vA, &vB, &vC);
  scanf("%lf %lf %lf", &uA, &uB, &uC);

  if((uA * vB == uB * vA) && (uA * vC == uC * vA) && (uB * vC == uC * vB)){ // verifica se a razao dos numeros é igual evitando divisoes por zero
    printf("LD \n");
  }
  else{
    printf("LI \n");
  }

}