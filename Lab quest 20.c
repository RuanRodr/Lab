#include <stdio.h>

int main() {
int num;
int resto;
  
puts("Digite um número inteiro:");
  scanf("%d", &num);
    resto = num % 2;
  
printf("O número %d é %s.\n", num, resto == 0 ? "par" : "ímpar");
  return 0;
}