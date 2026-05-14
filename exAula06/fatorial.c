#include <stdio.h>

int main (){
  long long n;
  int qtdzeros = 0;

scanf("%lld", &n);

while(n > 0){
  n /= 5;
  qtdzeros += n;
}
printf("%d", qtdzeros);
}