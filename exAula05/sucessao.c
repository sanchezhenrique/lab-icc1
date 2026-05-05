#include <stdio.h>

int main(){
  int quantidade_principes, principes_poderes[1000][2], vencedor;

  scanf("%d", &quantidade_principes);

  // Leitura e Organizacao em uma matriz ([total_poder] [guarda_mais_forte])
  for(int i = 0; i < quantidade_principes; i++){
    int poder_principe, qtd_guardas;
    principes_poderes[i][0] = 0;
    scanf("%d %d", &poder_principe, &qtd_guardas);

    for(int j = 0; j < qtd_guardas; j++){
      int poder_guarda;
      scanf("%d", &poder_guarda);
      principes_poderes[i][0] += poder_guarda * poder_principe;

      if(j == 0){
        principes_poderes[i][1] = poder_guarda;
      }
      else if(principes_poderes[i][1] < poder_guarda){
        principes_poderes[i][1] = poder_guarda;
      }
    }
  }

  //Verificação do Ganhador
  for(int i = 0; i < quantidade_principes; i++){
    if(i == 0){
      vencedor = i;
    } 
    else if(principes_poderes[vencedor][0] < principes_poderes[i][0]){
      vencedor = i;
    } 
    
    else if(principes_poderes[vencedor][0] == principes_poderes[i][0]){ // Desempate com o guarda mais forte
      if(principes_poderes[vencedor][1] < principes_poderes[i][1]){
        vencedor = i;
      }
    }
  }

  printf("O vencedor e o Principe %d \n", vencedor + 1);
}