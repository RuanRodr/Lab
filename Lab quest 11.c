#include <stdio.h>

int main(){
  float dolar;
  float real;

  puts("Qual a cotação do dólar?");
  scanf("%f", &dolar);
  puts("Quantos reais você deseja converter?");
  scanf("%f", &real);

  real = dolar * real;
  printf("A conversão do Real é: %.2f", real);
  return 0;
}
