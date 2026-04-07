#include <stdio.h>

int main(){
  int esquerda, direita;
  scanf("%d %d", &esquerda, &direita);
  if(esquerda == direita){
    printf("Empate");
  }
  else if((esquerda - direita + 3 ) % 3 == 1){
    printf("Direita");
  }
  else{
    printf("Esquerda");
  }
}

// a - b + 3 
/* 
0 0 0 empate +3 =3 %3 =0
0 1 - 1 vitoria de a + 3= 2 %3 = 2
0 2 -2 vitoria de b + 3 =1 % 3 =1

1 0 1 vitoia de b  +3= 4 %3 =1
1 1 empate +3 = 0 % 3 =0
1 2 -1 vitoria de a + 3 = 2 %3 = 2

2 0 2 vitoria de a + 3 =5 %3 =2
2 1 1 vitoria de b +3 =4 %3 =1
2 2 0 empate +3 = 3 %3 =0
*/
//O resto da subtração dos resultados somados 3 por 3 é igual