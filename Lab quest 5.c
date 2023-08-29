#include <stdio.h>

int main() {
 float x; //Deixei em float para dar um número mais exato na hora do cálculo.
  printf("Digite o valor da conta:\n");
  scanf("%f", &x);
  float conta = x + (x * 10/100);
  printf("O valor total da conta é de %.2f:", conta);
  return 0;
}