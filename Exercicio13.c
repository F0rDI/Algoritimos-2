#include <stdio.h>
#define tam 2

void DadosPessoas();
float media(float salario[tam]);
void idadeM(int idade[tam], int *maior, int *menor);
int Mulheres(char sexo[tam], float salario[tam], int numFilhos[tam]);

int main() {

  DadosPessoas();

  return 0;
}

void DadosPessoas() {

  int idade[tam], numFilhos[tam], menor, maior;
  float salario[tam], mediaS, cont1 = 0, cont2 = 0;
  char sexo[tam];

  for (int i = 0; i < tam; i++) {
    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &idade[i]);
    printf("\nDigite o sexo da pessoa (M ou F): ");
    scanf(" %c", &sexo[i]);
    printf("\nDigite o salario da pessoa: ");
    scanf("%f", &salario[i]);
    printf("\nDigite o numero de filhos: ");
    scanf("%d", &numFilhos[i]);
  }
  for (int i = 0; i < tam; i++) {
    printf(
        "\nPessoa %d:\nIdade: %d,\nSexo: %c,\nSalario: %.2f,\nNumFilhos: %d\n",
        i + 1, idade[i], sexo[i], salario[i], numFilhos[i]);
    mediaS = media(salario);
    idadeM(idade, &maior, &menor);
    cont1 = Mulheres(sexo, salario, numFilhos);
  }

  printf("\nA media salarial da populacao eh: %.2f\n", mediaS);
  printf("\nA maior idade eh: %d\nA menor idade eh: %d", maior, menor);
  printf("\nA quantidade de mulheres com salario menor que R$500,00 e com 3 "
         "filhos eh: %.2f",
         cont1);
}

float media(float salario[tam]) {
  float mediaSalario = 0.0;
  for (int i = 0; i < tam; i++) {
    mediaSalario += salario[i];
  }
  return mediaSalario / tam;
}

void idadeM(int idade[tam], int *maior, int *menor) {

  int ajudante;
  *maior = idade[0];
  *menor = idade[1];
  if (*maior < *menor) {
    ajudante = *menor;
    *menor = *maior;
    *maior = ajudante;
  }

  for (int i = 1; i < tam; i++) {
    if (idade[i] > *maior) {
      *maior = idade[i];
    } else if (idade[i] < *menor)
      *menor = idade[i];
  }
}
int Mulheres(char sexo[tam], float salario[tam], int numFilhos[tam]) {
  int cont = 0;
  for (int i = 0; i < tam; i++) {
    if (sexo[i] == 'F' ||
        sexo[i] == 'f' && salario[i] <= 500 && numFilhos[i] == 3)
      cont++;
    else
      printf("\nNao ha mulheres que atendam aos requisitos");
  }
  return cont;
}