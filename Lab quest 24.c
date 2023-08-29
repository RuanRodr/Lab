#include <stdio.h>

int main() {
  int x, n, valor;
  
  puts("Escreva um número x inteiro:");
    scanf("%d", &x);
  puts("Escreva um número n para X * 2^n:");
    scanf("%d", &n);

  valor = x << n;
  printf("A operação deu: %d", valor);
  return 0;
}