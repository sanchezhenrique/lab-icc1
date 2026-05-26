#include <stdio.h>

int main (){
  int n;
  scanf("%d", &n);
  int mulheres = 0, homens = 0, somaIdadeHomensExperiencia = 0, somaHomensMais45 = 0, 
  mulheresMenosde21comExperiencia = 0, linguagens = 0, homensExperiencia,
  programacao = 0, engenharia = 0;

  for(int i = 0; i < n; i++){
    int idade;
    char s, a, x;
    scanf("%d %c %c %c", &idade, &s, &a, &x);

    if(s == 'M'){
      homens++;
      if(x == 'S'){
        somaIdadeHomensExperiencia += idade;
        homensExperiencia++;
      }
      if(idade > 45){
        somaHomensMais45++;
      }
      
    } else{
      mulheres++;
      if(idade < 21 && x == 'S'){
        mulheresMenosde21comExperiencia++;
      }
    }

    switch(a){
      case 'L':
        linguagens++;
        break;
      
      case 'P':
        programacao++;
        break;
      
      case 'E':
        engenharia++;
        break;
    }
  }

  printf("%d\n", mulheres);
  printf("%d\n", homens);
  printf("%d\n", somaIdadeHomensExperiencia / homensExperiencia);
  printf("%.2f%%\n", ((float)somaHomensMais45 / homens) * 100);
  printf("%d\n", mulheresMenosde21comExperiencia);
  printf("%d %d %d\n", linguagens, programacao, engenharia);
}