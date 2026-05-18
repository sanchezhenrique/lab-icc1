#include <stdio.h>

int main() {
  int n;
  int primeiro, anterior, atual;
  long long soma = 0;
  scanf("%d", &n);
  scanf("%d", &primeiro);
  anterior = primeiro;
  for (int i = 1; i < n; i++) {
    scanf("%d", &atual);
    soma += anterior * atual;
    anterior = atual;
  }
  soma += anterior * primeiro;
  printf("%lld\n", soma);

}