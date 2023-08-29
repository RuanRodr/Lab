#include <stdio.h>

int main() {
  int A, B, X;
  puts("Escreva o valor de A e B");
  scanf("%d", &A);
  scanf("%d", &B);
  X = A;
  A = B;
  B = X;
  printf("O valor de A é: %d\n", A);
  printf("O valor de B é: %d", B);
  return 0;
}