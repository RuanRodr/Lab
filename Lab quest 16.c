#include <stdio.h>

int main() {
float valor, desconto;
  int horas;
  
  puts("Digite o valor da hora aula:\n");
    scanf("%f", &valor);
  puts("Agora digite a quantidade de horas trabalhadas no mês:");
    scanf("%d", &horas);
  puts("Digite a % de desconto do INSS:");
    scanf("%f", &desconto);

  float bruto, liquido;
    bruto = horas * valor;
    desconto = bruto * (desconto / 100);
    liquido = bruto - desconto;
  
  printf("Salário Bruto: R$%.2f\n", bruto);
  printf("Salário Líquido: R$%.2f\n", liquido);
  return 0;
}