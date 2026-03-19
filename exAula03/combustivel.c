#include <stdio.h>

int main(){
  int distancia;
  float eficiencia, litros;
  scanf("%d %f", &distancia, &litros);
  eficiencia = distancia / litros;
  if(eficiencia < 8){
    printf("Venda o carro!");
  }
  else if(eficiencia <= 12){
    printf("Economico!");
  }
  else{
    printf("Super economico!");
  }
}