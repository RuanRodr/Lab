#include <stdio.h>

int main() {
float temp;

  puts("Digite o tempo");
  scanf("%f", &temp);

  float temp2 = temp * 60;
  float temp3 = temp * 60 * 60;
  
  printf("A quantidade de horas convertidas é: %.f h\n", temp);
  printf("A quantidade de minutos convertidos é: %.2f min\n", temp2);
  printf("A quantidade de segundos convertidos é: %.2f s\n", temp3);
  return 0;
}