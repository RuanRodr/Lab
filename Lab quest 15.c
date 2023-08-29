#include <stdio.h>

int main() {
  int dias;
  float salario, bruto;
  puts("Digite a quantidade de dias trabalhados:");
  scanf("%d", &dias);
   salario = dias * 50.25;
  
  if(dias <= 10){
    printf("O valor do salário liquido com gratificação é: R$%.2f\n", salario);
  } else if(dias > 10 && dias <= 20){
    salario = salario + (salario * 20 / 100);
    printf("O valor do salário liquido com gratificação é: R$%.2f\n", salario);
  } else {
    salario = salario + (salario * 30 / 100);
    printf("O valor do salário liquido com gratificação é: R$%.2f\n", salario);
  }
  
  bruto = salario - (salario * 10 / 100);
  printf("e o valor do salário Bruto é: R$%.2f", bruto);
  return 0;
}