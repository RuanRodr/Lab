#include <stdio.h>

int main() {
  int hora, minuto, segundo;
  
  puts("Quantidade de horas:");
    scanf("%d", &hora);
  puts("Quantidade de minutos:");
    scanf("%d", &minuto);
  puts("Quantidade de segundos");
    scanf("%d", &segundo);

  segundo = segundo + (60 * minuto) + (60 * 60 * hora);

  printf("A quantidade total de segundos é de %d", segundo);
}