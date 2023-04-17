#include <stdio.h>

void imprimir_array(int tamanho, long long array[]) {
  printf("%lld", array[0]);
  for(int i = 1; i < tamanho; i++) {
    printf(" %lld", array[i]);
  }
  printf("\n");
}

unsigned int eh_abaixo_da_media(long long valor, double media) {
  if (valor < media) {
    return 1;
  }
  return 0;
}

unsigned int eh_igual_ou_acima_da_media(long long valor, double media) {
  if (valor >= media) {
    return 1;
  }
  return 0;
}

void preencher_elementos_abaixo_da_media(double media, int tamanho, int limite, long long array[], long long copia_array[]) {
  int aux = 0;
  for(int i = 0; i < tamanho; i++) {
    if (aux < limite) {
      if(eh_abaixo_da_media(array[i], media)) {
        copia_array[aux] = array[i];
        aux++;
      }
    } else {
        break;
    }
  }
}

void preencher_elementos_iguais_ou_acima_da_media(double media, int tamanho, int limite, long long array[], long long copia_array[]) {
  int aux = 0;
  for(int i = 0; i < tamanho; i++) {
    if (aux < limite) {
      if(eh_igual_ou_acima_da_media(array[i], media)) {
        copia_array[aux] = array[i];
        aux++;
      }
    } else {
        break;
    }
  }
}


long long qtd_valores_iguais_ou_acima_da_media(int tamanho, long long array[], double media) {
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
  int tamanho, aux = 0;
  scanf("%d", &tamanho);
  long long array[tamanho];
  ler_array(tamanho, array);
  double media = calcular_media(tamanho, array);
  long long iguais_ou_acima_da_media = qtd_valores_iguais_ou_acima_da_media(tamanho, array, media);
  long long abaixo_da_media = qtd_valores_abaixo_da_media(tamanho, array, media);
  long long elementos_iguais_ou_acima_da_media[iguais_ou_acima_da_media];
  preencher_elementos_iguais_ou_acima_da_media(media, tamanho, iguais_ou_acima_da_media, array, elementos_iguais_ou_acima_da_media);
long long elementos_abaixo_da_media[abaixo_da_media];
  preencher_elementos_abaixo_da_media(media, tamanho, abaixo_da_media, array, elementos_abaixo_da_media);
  printf("%.1lf\n%lld ", media, abaixo_da_media);
  imprimir_array(abaixo_da_media, elementos_abaixo_da_media);
  printf("%lld ", iguais_ou_acima_da_media);
  imprimir_array(iguais_ou_acima_da_media, elementos_iguais_ou_acima_da_media);
}