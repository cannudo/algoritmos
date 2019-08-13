#include <stdio.h>

int main(void) {
  int nota1, nota2;
  printf("Digite a primeira nota: ");
  scanf("%d", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%d", &nota2);
  int media = ((nota1 * 2) + (nota2 * 3)) / 5;
  printf("A média ponderada entre os valores digitados é %d\n",  media);
  return 0;
}
