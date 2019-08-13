#include <stdio.h>

int main(void) {
  int largura, profundidade;
  printf("Digite a largura:\n");
  scanf("%d", &largura);
  printf("Digite a profundidade:\n");
  scanf("%d", &profundidade);
  int area = (largura * profundidade) / 2;
  printf("Para iluminar esta área, é preciso de %d W.\n", area * 18);
  return 0;
}
