#include <stdio.h>

int main() {
  int C;
  puts("Escreva a temperatura atual em Celsius");
  scanf("%d", &C);
  float F;
  F = (9 * C + 160) / 5;
  printf("A temperatura em Fahrenheit é %.2f°", F);
  return 0;
}