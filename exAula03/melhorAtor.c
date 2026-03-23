#include <stdio.h>

int main(){
  unsigned int total, bale, opera, bale_opera, votos_validos;
  scanf("%u %u %u %u", &total, &bale, &opera, &bale_opera);
  votos_validos = total - (bale + opera - bale_opera); // Validos são pessoas que não gostam de bale ou de opera.

  printf("%u \n", votos_validos);
}