#include <stdio.h>

int main(void) {
  printf("Que horas são? (ex. 10h15)\n");
  int hora, minuto;
  scanf("%dh%d", &hora, &minuto);
  int totaldeminutos = 0;
  totaldeminutos += hora * 60;
  totaldeminutos += minuto;
  printf("Considerando que o dia começou 0h, se passaram %d minutos desde seu início.\n", totaldeminutos);
  return 0;
}
