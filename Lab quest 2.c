#include <stdio.h>

int main(){
  printf("Escreva um número inteiro\n");
  int x;
  scanf("%d", &x);
  printf("Em Hexadecimal: %X\n",x);
  printf("Em Octal %o\n",x);
  return 0;
}