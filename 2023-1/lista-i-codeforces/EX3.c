#include <stdio.h>

unsigned long int perimetro(unsigned long int lado1, unsigned long int lado2) {
  return (lado1 * 2) + (lado2 * 2);
}

int main(void) {
  unsigned long int lado1, lado2;
  scanf("%lu %lu",  &lado1, &lado2);
  printf("%lu\n", perimetro(lado1, lado2));
  return 0;
}