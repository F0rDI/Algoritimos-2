#include <stdio.h>

int divi(int num1, int num2);

int main(void) {
  int num1, num2, soma;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  soma = divi(num1, num2);

  if(soma == 0)
    printf("Seu primeiro numero eh divisivel pelo segundo");
  else
    printf("Aqui esta seu divizor = %d", soma);
  
  return 0;
}

int divi(int num1, int num2){

  if(num1 % num2 == 0)
    return 0;
  else if (num1 % num2 != 0){
    while(num1 % num2 != 0){
      num2++;
    }
  return num2;
  }
  
}