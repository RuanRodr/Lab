#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  puts("Digite um número para transforma-lo em seu valor absolto:");
    scanf("%d", &numero);
      numero = abs(numero);
  printf("O valor absolto é: %d", numero);
  return 0;
}