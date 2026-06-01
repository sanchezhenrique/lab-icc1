/* A possui inform s
  B -> A s vira T (todas as vogais de s em Maisculo)
  C -> B t vira R (todas as consoantes de t em minusculo)
*/
void transformaVetorPonteiroSimples(char *p, char vetCompara[], char vetTroca[]);
void transformaVetorPonteiroDuplo(char **p, char vetCompara[], char vetTroca[]);

#include <stdio.h>

int main (){
  char A[101];
  scanf(" %100[^\n]", A);
  char *B, **C;
  B = A;
  C = &B;
  char vogais[] = "aeiou";
  char vogaisMaisculas[] = "AEIOU";
  char consoantesMinusculas[] = "bcdfghjklmnpqrstvwxyz";
  char consoantes[] = "BCDFGHJKLMNPQRSTVWXYZ";

  transformaVetorPonteiroSimples(B, vogais, vogaisMaisculas);
  printf("%s\n", A);
  B = A; // Retorna ao Inicio da String
  transformaVetorPonteiroDuplo(C, consoantes, consoantesMinusculas);
  printf("%s\n", A);
}
/* while(*B != '\0'){
    for(int i = 0; vogais[i] != '\0'; i++){
      if(*B == vogais[i]){
        *B = vogaisMaisculas[i];
        break;
      }
    }
    B++;
  }

  while(**C != '\0'){
    for(int i = 0; consoantes[i] != '\0'; i++){
      if(**C == consoantes[i]){
        **C = consoantesMinusculas[i];
        break;
      }
    }
    C++;
  }

  printf("%s", A);
}
*/

void transformaVetorPonteiroSimples(char *p, char vetCompara[], char vetTroca[]){
    while(*p != '\0'){
    for(int i = 0; vetCompara[i] != '\0'; i++){
      if(*p == vetCompara[i]){
        *p = vetTroca[i];
        break;
      }
    }
    p++;
  }
}

void transformaVetorPonteiroDuplo(char **p, char vetCompara[], char vetTroca[]){
    while(**p != '\0'){
    for(int i = 0; vetCompara[i] != '\0'; i++){
      if(**p == vetCompara[i]){
        **p = vetTroca[i];
        break;
      }
    }
    (*p)++;
  }
}