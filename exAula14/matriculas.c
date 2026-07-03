#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct matricula
{
  char nomeAluno[50];
  char data[9];
} matriculas;

matriculas* realocaVetor(matriculas *vet, int tamanho ){
  matriculas* temp = realloc(vet, tamanho * sizeof(matriculas));
  if(temp == NULL){
    exit(1);
  } else{
    return temp;
  }
}

void criaMatricula(matriculas **vet, int *indice, int *tamanhoVet){
  if(*indice == *tamanhoVet){
    *tamanhoVet *=2;
    *vet = realocaVetor(*vet, *tamanhoVet);
  }
  scanf(" %s %s", (*vet)[(*indice)].nomeAluno, (*vet)[(*indice)].data);
  (*indice)++;
}

void buscaMatriculaNome(matriculas *vet, char *nome, int indice){
  int flag = 0;
  for(int i = 0; i < indice; i++){
    if(strcmp(vet[i].nomeAluno, nome) == 0){
      printf("%s ",vet[i].data);
      flag = 1;
    }
  }
  if(!flag){
    printf("N/A");
  }
  printf("\n");
}

void buscaMatriculaData(matriculas *vet, char *data, int indice){
  int flag = 0;
  for(int i = 0; i < indice; i++){
    if(strcmp(vet[i].data, data) == 0){
      printf("%s ",vet[i].nomeAluno);
      flag = 1;
    }
  }
  if(!flag){
    printf("N/A");
  }
  printf("\n");
}



int main(){
  int indice = 0, tamanhoVet = 1;
  matriculas *vet = malloc(sizeof(matriculas) * tamanhoVet);
  if(vet == NULL){
    exit(1);
  }
  while(1){
    int operacao;
    scanf("%d", &operacao);
    char nome[50], data[50];
    switch (operacao){
      case 1:
        criaMatricula(&vet, &indice, &tamanhoVet);
        break;
      
      case 2:
        scanf(" %s", nome);
        buscaMatriculaNome(vet, nome, indice);
        break;

      case 3:
        scanf(" %s", data);
        buscaMatriculaData(vet, data, indice);
        break;

      default:
        free(vet);
        vet = NULL;
        return 0;
        break;
    }
  }
}