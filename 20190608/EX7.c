#include <stdio.h>

int main(void) {
  float salario;
  printf("Digite seu salário: ");
  scanf("%f", &salario);
  float aumento = (((salario * 6)) / 100) + salario;
  printf("Seu salário com aumento de 6%s: %.2f ", "%", aumento);
  return 0;
}
