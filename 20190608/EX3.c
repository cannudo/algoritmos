#include <stdio.h>

int main(void) {
  int parcela1, parcela2;
  printf("Digite a primeira parcela: ");
  scanf("%d", &parcela1);
  printf("Digite a segunda parcela: ");
  scanf("%d", &parcela2);
  int soma = parcela1 + parcela2;
  printf("%d + %d = %d\n", parcela1, parcela2, soma);
  return 0;
}
