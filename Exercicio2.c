#include <stdio.h>

int soma(int h, int m, int s);

int main(void) {
  int h,m,s,resultado;

  printf("Digite a hora: ");
  scanf("%d", &h);
  printf("Digite os minutos: ");
  scanf("%d", &m);
  printf("Digite os segundos: ");
  scanf("%d", &s);

  resultado = soma(h,m,s);
  printf("A soma dos segundos eh: %d", resultado);
  
  return 0;
}
int soma(int h, int m, int s){
  int soma,horas,minutos;

  horas = h*3600;
  minutos = m*60;
  soma = horas+minutos+s;

  return soma;
}