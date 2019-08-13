#include <stdio.h>

int main(void) {
  int nota1, nota2, peso1, peso2;
  printf("Digite a primeira nota: ");
  scanf("%d", &nota1);
  printf("Digite o peso da primeira nota: ");
  scanf("%d", &peso1);
  printf("Digite a segunda nota: ");
  scanf("%d", &nota2);
  printf("Digite o peso da segunda nota: ");
  scanf("%d", &peso2);
  int media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
  printf("A média ponderada entre os valores digitados é %d\n",  media);
  return 0;
}
