#include <stdio.h>

int main(void) {
  float salariobase;

  printf("Quanto você recebe atualmente?\n");
  scanf("%f", &salariobase);
  float gratificacao = (salariobase * 5) / 100;
  float imposto = (salariobase * 7) / 100;
  float novosalario = salariobase - imposto + gratificacao;
  printf("Com a dedução de impostos e as gratificações, você deverá receber R$ %.2f\n", novosalario);
  return 0;
}
