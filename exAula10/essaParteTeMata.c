#include <stdio.h>

int main (){
  int n, k, trapacas = 0;
  scanf("%d %d", &n, &k);

  int kAntigo = k;
  for(int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    if(x == 1){
      k--;
    } else{
      k = kAntigo;
    }

    if(k < 0){
      trapacas++;
    }
  }

  printf("%d", trapacas);
}