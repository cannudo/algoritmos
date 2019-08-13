#include <stdio.h>

int main(void) {
  int numero;
  printf("Digite um valor inteiro:\n");
  scanf("%d", &numero);
  while (numero > 0) {
    printf("%d\n", numero % 10);
    numero /= 10;
  }
  return 0;
}
