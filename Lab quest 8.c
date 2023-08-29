#include <stdio.h>
#include <math.h>

int main() {
  int valor;
  puts("Escreva um valor inteiro");
  scanf("%d", &valor);
  valor = pow(valor, 2);
  printf("O valor inteiro ao quadrado é: %d", valor);
  return 0;
}