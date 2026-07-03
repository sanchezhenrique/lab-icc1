#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void copia(char *s1, char *s2){
  int i = 0;
  while(s1[i] != '\0'){
    s2[i] = s1[i];
    i++;
  }
  s2[i] = '\0';
}

int main (){
  char s[MAX];

  scanf(" %s", s);

  FILE *fp = fopen(s, "r");
  if(fp == NULL) exit(1);

  float n1, n2, n3, n4, maiorMed = -1, menorMed = 11, somaMed = 0;
  char codigo[9], codigoMaiorMed[9], codigoMenorMed[9];
  int aprov = 0, total = 0;
  

  while (fscanf(fp, "%8[^,],%f,%f,%f,%f\n", codigo, &n1, &n2, &n3, &n4) == 5) {
    float med = (n1 + n2 + n3 + n4) / 4.0;
    somaMed += med;
    total++;

    if(med >= 5) aprov++;
    if(med > maiorMed){
      maiorMed = med;
      copia(codigo, codigoMaiorMed);
    }
    if(med < menorMed){
      menorMed = med;
      copia(codigo, codigoMenorMed);
    }
  }
  fclose(fp);
  printf("%s %.1f\n", codigoMaiorMed, maiorMed);
  printf("%s %.1f\n", codigoMenorMed, menorMed);
  printf("%.2f%\n", (100.0 * aprov) / total);
  printf("%.1f\n", (somaMed / total));
}