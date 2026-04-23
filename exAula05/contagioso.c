#include <stdio.h>

int main (){
  int n, pares = 0, impares = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int dor;
    scanf("%d", &dor);
    if(dor == 0){
      continue;
    }

    if(dor % 2 == 0){
      pares++;
    } else {
      impares ++;
    }
  }

  if(pares > impares){
    printf("Pares");
  } else{
    printf("Impares");
  }
}