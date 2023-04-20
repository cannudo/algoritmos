#include <stdio.h>

int valor_eh_unico(long long valor, int limite, long long array[], int indice) {
  int unico = 1;
  for(int i = 0; i < limite; i++) {
    if(i == indice) {
      break;
    } else {
      if(array[i] == valor) {
        unico = 0;
        break;
      }
    }
  }
  return unico;
}

int qtd_elementos_unicos(int limite, long long array[]) {
  int resultado = 0;
  for(int i = 0; i < limite; i++) {
    long long valor = array[i];
    resultado = resultado + valor_eh_unico(valor, limite, array, i);
  }
  return resultado;
}


void ler_elementos_do_array(int limite, long long array[]) {
  for(int i = 0; i < limite; i++) {
    scanf("%lld", &array[i]);
  }
}

int ler_inteiro(void) {
  int retorno;
  scanf("%d", &retorno);
  return retorno;
}

int loop_interacoes(int interacoes) {
  int unicos = 0;
  for(int i = 0; i < interacoes; i++) {
    int tamanho = ler_inteiro();
    long long array[tamanho];
    ler_elementos_do_array(tamanho, array);
    unicos = qtd_elementos_unicos(tamanho, array);
    array[i] = unicos;
  }
  return unicos;
}

int main(void) {
  int interacoes;
  interacoes = ler_inteiro();
  int array_interacoes[interacoes];

  for(int i = 0; i < interacoes; i++) {
    int tamanho = ler_inteiro();
    long long array[tamanho];
    ler_elementos_do_array(tamanho, array);
    int unicos = qtd_elementos_unicos(tamanho, array);
    array_interacoes[i] = unicos;
  }

  for(int i = 0; i < interacoes; i++) {
    printf("%d\n", array_interacoes[i]);
  }
  printf("\n");

  return 0;
}