#include <stdio.h>

int main() {
  int a, b;
  puts("Escreva dois números inteiros");
  scanf("%d", &a);
  scanf("%d", &b);
  float valor;
  
  valor = a + b;
  printf("A soma dos dois números é: %.f\n", valor);
  
  valor = a * b;
  printf("O produto dos dois números é: %.f\n", valor);

  valor = a - b;
  printf("A diferença dos dois números é: %.f\n", valor);

  valor = a / b;
  printf("O quociente dos dois números é: %.2f\n", valor);

  valor = a % b;
  printf("O resto dos dois números é: %.2f\n", valor);
  return 0;
}