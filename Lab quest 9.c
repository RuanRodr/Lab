#include <stdio.h>

int main() {
 int i;
  puts("Escreva um valor inteiro:");
  scanf("%d", &i);
  printf("O valor sucessor é: %d\n", i + 1);
  printf("O valor antecessor é: %d", i - 1);
  return 0;
}