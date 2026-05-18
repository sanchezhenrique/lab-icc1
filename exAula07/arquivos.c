#include <stdio.h>

int main (){
  int a1, a2, a3, n;
  scanf("%d %d %d", &a1, &a2, &a3);

  int *arquivos[3];
  arquivos[0] = &a1;
  arquivos[1] = &a2;
  arquivos[2] = &a3;

  int removido[3] = {0,0,0};

  scanf("%d", &n);
  
  for(int j = 0; j < n; j++){
    int operacao, i;
    scanf("%d", &operacao);

    switch(operacao){
      case 1: //Atualizacao
        int x;
        scanf("%d %d", &i, &x);

        if(!removido[i - 1]){
          *arquivos[i - 1] = x;
        }
        break;

      case 2: //Remocão logica  
        scanf("%d", &i);

        if(!removido[i-1]){
          removido[i - 1] = 1;
        }
        break;

      case 3:
        int j;
        scanf("%d %d", &i, &j);

        if(!removido[i - 1] && !removido[j - 1]){
          int temp = *arquivos[i - 1];
          *arquivos[i - 1] = *arquivos[j - 1];
          *arquivos[j - 1] = temp;
        }
        break;
    }
  }

  for(int i = 0; i < 3; i++){
    if(removido[i]){
      printf("NULL " );
    } else {
      printf("%d ", *arquivos[i]);
    }
  }
  printf("\n");
}