#include <stdio.h>

int main (){
  int m, n;
  scanf("%d %d", &n, &m);

  int crescente[n], decrescente [m], final[m+n];

  for(int i = 0; i < n; i++){
    scanf("%d", &crescente[i]);
  }

  for(int i = 0; i < m; i++){
   scanf("%d", &decrescente[i]);
  }

  int i = 0;
  int j = m -1;
  int k = 0;

  // intercala os dois vetores
  while(i < n && j >=0){
    if(crescente[i] < decrescente[j]){
      final[k] = crescente[i];
      i++;
    } else{
      final[k] = decrescente[j];
      j--;
    }
    k++;
  }

 // copia o restante do crescente
  while(i < n){
    final[k] = crescente[i];
    i++;
    k++;
  }

  // copia o restante do decrescente
  while(j >= 0){
    final[k] = decrescente[j];
    j--;
    k++;
  }

  for(int i = 0; i < m + n; i++){
   printf("%d ", final[i]);
  }
}