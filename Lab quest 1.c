#include <stdio.h>

int main() {
int x;

  //A ordem deste caso acontecerá primeiro com a divisão, depois a soma e multiplicação, e logo em seguida a subtração.
  x = 7 + 3 * 6 / 2 - 1;
  printf("%d\n", x);

  //Primeiro a %, depois a multiplicação e divisão, e logo em seguida a soma e subtração.
  x = 2 % 2 + 2 * 2 - 2 / 2;
  printf("%d\n", x);

  //Primeiro a divisão, depois a soma e logo em seguida a multiplicação entre 3 * 9 *(3...). 
  x = (3 * 9 * (3 + (9 * 3 / (3))));
  printf("%d\n", x);
    
  return 0;
}