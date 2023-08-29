#include <stdio.h>
int main(){
  printf("Escreva um valor inteiro:\n");
  float x;
  scanf("%f", &x);
  printf("O triplo do valor: %.f\n",3*x);
  printf("O quadrado do valor: %.f\n", x*x);
  printf("A metade do valor: %.1f\n", x/2);
  return 0;
}