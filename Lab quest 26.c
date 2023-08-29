#include <stdio.h>
#include <math.h>

int main() {
  int x1, x2, y1, y2;

  puts("Escreva X1");
    scanf("%d", &x1);
  puts("Escreva Y1");
    scanf("%d", &y1);
  puts("Escreva X2");
    scanf("%d", &x2);
  puts("Escreva Y2");
    scanf("%d", &y2);

  int d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distância entre os dois pontos é: %d", d);
  return 0;
}