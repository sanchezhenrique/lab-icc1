#include <stdio.h>

int main (){
  int temp, maior, menor;
  scanf("%d", &temp);
  maior = temp;
  menor = temp;
  do {
    scanf("%d", &temp);
    if(temp > maior){
      maior = temp;
    }
    if(temp < menor && temp >= 0){
      menor = temp;
    }
  } while (temp >= 0);
  printf("%d %d", maior, menor);
}