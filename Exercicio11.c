#include <stdio.h>

int divi(int num);

int main(void) {
  int num, soma;

  printf("Digite um numero: ");
  scanf("%d", &num);

  soma = divi(num);

  printf("\nA soma dos divisores de %d eh: %d", num, soma);
  
  return 0;
}

int divi(int num){
  int soma;

  for(int i = 1; i <= num; i++){
    if(num % i == 0)
      soma+= i;
  }
  return soma;
}