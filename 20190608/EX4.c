#include <stdio.h>

int main(void) {
  int nota1, nota2, nota3;
  printf("Digite a primeira nota: ");
  scanf("%d", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%d", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%d", &nota3);
  int media = (nota1 + nota2 + nota3) / 3;
  printf("A média aritmética entre os valores digitados é %d\n",  media);
  return 0;
}
