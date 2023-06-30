#include <stdio.h>

void ler_inteiro(int *var) {
  scanf("%d", var);
}

int main(void) {
  // livre = 0, barreira = 1;
  // entrada_do_labirinto = matriz[0][0]
  int colunas, linhas;
  ler_inteiro(&colunas);
  ler_inteiro(&linhas);
  return 0;
}