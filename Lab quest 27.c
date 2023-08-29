#include <stdio.h>
#include <math.h>

int main() {
  float num1, num2, num3;
  
  scanf("%f", &num1);
  scanf("%f", &num2);
  scanf("%f", &num3);

  float ari = num1 + num2 + num3 / 3;
  float geo = pow(num1 * num2 * num3, 3);

  printf("A média aritmética é: %.2f\n", ari);
  printf("A média geométrica é: %.2f\n", geo);
  return 0;
}