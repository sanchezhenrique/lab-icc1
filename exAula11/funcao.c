void contagem (int a , int b , int * contDef , int * contPerf , int* contAbu ){
  *contAbu = 0;
  *contDef = 0;
  *contPerf = 0;
  for(a; a <= b; a++){
    int somaDiv = 0;
    for(int i = 1; i <= a/2; i++){
      if( a % i == 0)
        somaDiv += i;
    }
    if(somaDiv == a){
      *contPerf += 1;
    } else if(somaDiv < a){
      *contDef += 1;
    } else{
      *contAbu += 1;
    }
  }
}