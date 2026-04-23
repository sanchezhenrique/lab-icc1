#include <stdio.h>

int main (){
  int n, total, esse, prox, i = 0;

  scanf("%d", &n);
  scanf("%d", &esse);

  while(i < n){
    if(scanf("%d", &prox) == -1){
      total += esse;
      i++;
      break;
    } else {
      
      if(prox != 0 ){
        total += esse;
        i++;
        esse = prox;
      }
      else{
        break;
      }
    }
  }
}