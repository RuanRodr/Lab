#include <stdio.h>

int main() {
  float metros;
  int sexo;
  float peso;
  
  puts("Escreva a sua altura:");
    scanf("%f", &metros);
  puts("Qual o seu sexo? (1)Homem ou (2)Mulher.");
    scanf("%d", &sexo);
  
  switch (sexo){
    case 1:
  peso = 72.7 * metros - 58;
    break;
    default:
  peso = 62.1 * metros - 44.7;
    break;
  }
  printf("O Seu peso ideal é %.1f Kg", peso);
  return 0;
}