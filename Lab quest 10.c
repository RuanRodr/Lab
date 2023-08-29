#include <stdio.h>

int main() {
  float volume, comprimento, largura, altura;
  
  puts("Escreva o comprimento em metros");
    scanf("%f", &comprimento);
  puts("Escreva a largura em metros");
    scanf("%f", &largura);
  puts("Escreva a altura em metros");
    scanf("%f", &altura);
  
  volume = comprimento * altura * largura;
  
  printf("O volume da caixa em metros é: %.2f m³", volume);
  return 0;
}