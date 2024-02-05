#include <stdio.h>

float circulo(float raio);

int main(void) {
  float raio, volume;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  volume = circulo(raio);

  printf("A area do circulo e: %.2f", volume);
  
  return 0;
}

float circulo(float raio){
  float volume;
  volume = (4.0/3.0)* pow(raio, 3);

  return volume;
}