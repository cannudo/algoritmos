#include <stdio.h>

unsigned int eh_igual_ou_acima_da_media(long long valor, double media) {
  if (valor >= media) {
    return 1;
  }
  return 0;
}

long long qtd_valores_iguais_ou_acima_da_media(int tamanho, long long array[],
                                         double media) {
  long long resultado = 0;
  for (int i = 0; i < tamanho; i++) {
    resultado = resultado + eh_igual_ou_acima_da_media(array[i], media);
  }
  return resultado;
}

unsigned int esta_abaixo_da_media(long long valor, double media) {
  if (valor < media) {
    return 1;
  }
  return 0;
}

long long qtd_valores_abaixo_da_media(int tamanho, long long array[], double media) {
  long long resultado = 0;
  for (int i = 0; i < tamanho; i++) {
    resultado = resultado + esta_abaixo_da_media(array[i], media);
  }
  return resultado;
}

double calcular_media(int tamanho, long long array[]) {
  long long soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma = soma + array[i];
  }
  double media = (double) soma / (double) tamanho;
  return media;
}

void ler_array(int tamanho, long long array[]) {
  for (int i = 0; i < tamanho; i++) {
    scanf("%lld", &array[i]);
  }
}

int main(void) {
  int tamanho;
  scanf("%d", &tamanho);
  long long array[tamanho];
  ler_array(tamanho, array);

  double media = calcular_media(tamanho, array);
  long long valores_abaixo_da_media =
      qtd_valores_abaixo_da_media(tamanho, array, media);
  long long valores_iguais_ou_acima_da_media =
      qtd_valores_iguais_ou_acima_da_media(tamanho, array, media);
  printf("%.1lf\n%lld\n%lld\n", media, valores_abaixo_da_media,
         valores_iguais_ou_acima_da_media);
}