#include <stdio.h>

int main (){
  int n, contador = 0;
  scanf("%d", &n);

  for(int i = 2; i <= n; i++){
    int primo = 1;
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        primo = 0;
        break;
      }
    }

    if(primo == 1){
      contador++;
    }
  }
  printf("%d \n", contador);
}