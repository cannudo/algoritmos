#include <stdio.h>

int main(void) {
  unsigned long int nota1, nota2;
  //printf("[PRIMEIRAS NOTAS DAS ETAPAS 1 E 2] Entre com as notas obtidas na "
  //       "primeira avaliação das etapas 1 e 2: ");
  scanf("%lu %lu", &nota1, &nota2);
  //printf("[PRIMEIROS RESULTADOS DAS ETAPAS 1 E 2] Você obteve %lu e %lu nas "
  //      "primeiras avaliações das etapas 1 e 2.\n",
  //       nota1, nota2);

  unsigned long int nota3, nota4;
  //printf("[ULTIMAS NOTAS DAS ETAPAS 1 E 2] Entre com as notas obtidas na "
  //       "última avaliação das etapas 1 e 2: ");
  scanf("%lu %lu", &nota3, &nota4);
  //printf("[ÚLTIMO RESULTADO DAS ETAPAS 1 E 2] Você obteve %lu e %lu nas "
  //       "últimas avaliações das etapas 1 e 2.\n",
  //       nota3, nota4);

  unsigned long int peso1, peso2;
  //printf("[PESOS] Entre com o peso da primeira e da segunda avaliação: ");
  scanf("%lu %lu", &peso1, &peso2);

  double media1, media2;
  media1 = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
  media2 = ((nota3 * peso1) + (nota4 * peso2)) / (peso1 + peso2);

  //printf("Média 1: %f\nMédia 2: %f\n", media1, media2);
  
  if(media1 > media2) {
    printf("1\n");
  } else if(media2 > media1) {
    printf("2\n");
  } else {
    printf("1\n");
  }
  return 0;
}