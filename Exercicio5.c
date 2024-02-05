#include <stdio.h>

int verificar(int num);

int main(void) {
  int num, veri;

  printf("Digite um numero: ");
  scanf("%d", &num);

  veri = verificar(num);

  if(veri == 1)
    printf("\nSeu valor eh positivo!");
  else
    printf("\nSeu valor eh negativo!");

  
  return 0;
}
int verificar(int num){
  if(num > 0)
    return 1;
  else if(num < 0)
    return 0;
  else
    printf("\nErro!");
}