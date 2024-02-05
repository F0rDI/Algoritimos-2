#include <stdio.h>

float verificaSexo(char sexo, float alt);

int main(void) {
  float alt, resultado;
  char sexo;

  printf("Digite sua altura: ");
  scanf("%f", &alt);
  printf("\nDigite seu sexo (M/F): ");
  scanf("%s", &sexo);

  resultado = verificaSexo(sexo, alt);

  printf("\nSeu peso ideal eh: %.2f",resultado);
  
  return 0;
}
float verificaSexo(char sexo, float alt){
  if(sexo == 'M' || sexo == 'm')
    return (72.7 * alt) - 58;
  else if(sexo == 'F' || sexo == 'f')
    return (62.1*alt) - 44.7;
  else 
    printf("\nERRO!!");
}