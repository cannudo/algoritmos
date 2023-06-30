#include <stdio.h>

void ler_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
}

void imprimir_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void ler_inteiro(int *var) {
  scanf("%d", var);
}

int main(void) {
  // livre = 0, barreira = 1;
  // entrada_do_labirinto = matriz[0][0]
  int colunas, linhas;
  ler_inteiro(&colunas);
  ler_inteiro(&linhas);
  int matriz[linhas][colunas];
  ler_matriz(linhas, colunas, matriz);
  imprimir_matriz(linhas, colunas, matriz);
  return 0;
}