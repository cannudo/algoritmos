#include <stdio.h>
#include <stdlib.h>

int** alocar_memoria_matriz(int linhas, int colunas) {
  int **matriz = (int**) malloc(linhas * sizeof(int*));
  for (int i = 0; i < linhas; i++) {
    matriz[i] = (int*) malloc(colunas * sizeof(int));
  }
  return matriz;
}

void desalocar_memoria_matriz(int** matriz, int linhas) {
  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);
}

int backtracking(int linhas, int colunas, int** matriz, int linha, int coluna, int *caminho) {
  int saida = (linha == linhas - 1 && coluna == colunas - 1);
  int limite_superior = (coluna < 0);
  int limite_inferior = (linha >= linhas);
  int limite_direito = (coluna >= colunas);
  int parede = (matriz[linha][coluna] == 1);
  
  if (parede || limite_superior || limite_inferior || limite_direito) {
    return 0;
  } else if (saida) {
    return 1;
  }

  matriz[linha][coluna] = 9;

  int tem_saida = 0;
  tem_saida = backtracking(linhas, colunas, matriz, linha + 1, coluna, caminho) ||
  backtracking(linhas, colunas, matriz, linha, coluna + 1, caminho) ||
  backtracking(linhas, colunas, matriz, linha - 1, coluna, caminho) ||
  backtracking(linhas, colunas, matriz, linha, coluna - 1, caminho);
  
  matriz[linha][coluna] = 0;
  return tem_saida;
}

void ler_matriz(int linhas, int colunas, int** matriz) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
}

void imprimir_matriz(int linhas, int colunas, int** matriz) {
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
  int linhas, colunas;
  ler_inteiro(&linhas);
  ler_inteiro(&colunas);
  int** matriz = alocar_memoria_matriz(linhas, colunas);
  ler_matriz(linhas, colunas, matriz);
  int caminho = 0;
  printf("%d\n", backtracking(linhas, colunas, matriz, 0, 0, &caminho));
  return 0;
}