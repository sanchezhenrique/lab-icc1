#include <stdio.h>

int main (){
  double vInicial, gravidade, alturaMaxima;
  scanf("%lf %lf", &vInicial, &gravidade);
  alturaMaxima = (vInicial * vInicial) / (2 * gravidade); // Eq Torricelli adaptada.
  printf("%.2lf \n", alturaMaxima);
}