#include <stdio.h>

int main(void) {
  int inicio, fim;

  scanf("%d %d", &inicio, &fim);
  int duracao = fim - inicio;
  int horas = 0, minutos = 0;
  while (1) {
    if (duracao >= 60) {
      horas++;
      duracao = duracao - 60;
    } else {
      minutos = duracao;
      break;
    }
  }
  printf("%02d:%02d\n", horas, minutos);

  return 0;
}