#include <stdio.h>

int verifica(int num);

int main(void) {
  int num, soma;

  printf("Entre com o numero: ");
  scanf("%d", &num);

  soma = verifica(num);

  printf("%d", soma);

  return 0;
}
int verifica(int num) {
  int soma = 0;

  if (num > 1) {
    for (int i = 2; i < num; i++) {
      soma += i;
    }
  }
  return soma;
}