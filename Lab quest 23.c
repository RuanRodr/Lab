#include <stdio.h>

int main() {
  
int num;
  puts("Digite um número inteiro de 3 dígitos");
  scanf("%d", &num);

  int dig1 = num / 100;
  int dig2 = (num / 10) % 10;
  int dig3 = num % 10;

  int numcomple = (dig3 *100) + (dig2 * 10) + (dig1);
  printf("%d", numcomple);
return 0;
}