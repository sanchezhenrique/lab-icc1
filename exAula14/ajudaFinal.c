#include <stdio.h>
#define ll long long

int main() {
  ll n;
  scanf("%lld",&n);
  ll resp = 3 * n * (n+1) / 2; // Otimização das funcões
  printf("%lld\n", resp);
}