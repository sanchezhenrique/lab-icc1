#include <stdio.h>

int main(){
  int hp;
  char ataques[101];

  scanf("%d", &hp);
  scanf("%s", ataques);
  for(int i = 0; ataques[i] != '\0'; i++){
  
    switch(ataques[i]){
      case 'C':
        hp -= 30;
        break;
      
      case 'A':
        hp -= 10;
        break;

      case 'R':
        break;;
    }

    if(hp <= 0){
      printf("Desmaiou\n");
      return 0;
    }
  }

  printf("Sobreviveu com %d HP\n", hp);
}