#include <stdio.h>
#include <math.h>

int main() {
  float raio;
  float diametro;
  float circun;
  float area;
  float pi = 3.14159;
  
  puts("Digite o raio do circulo");
  scanf("%f", &raio);
  
  printf("O Diametro do circulo é: %f\n", diametro = raio * 2);
  printf("A Circunferência do circulo é: %f\n", circun = raio * (2 * pi));
  printf("A Área do circulo é: %f\n", area = pi * pow(raio, 2));
}