#include <stdio.h>

int main() {
  int num1, num2, multi;
  
printf("Digite um número inteiro:\n");
  scanf("%d", &num1);
printf("Digite um segundo número inteiro:\n");
  scanf("%d", &num2);

multi = !(num1 % num2);
  printf("O primeiro é múltiplo do segundo? %s\n", multi ? "Sim" : "Não");
  
  return 0;
}