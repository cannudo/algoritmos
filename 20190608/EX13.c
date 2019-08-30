#include <stdio.h>

int main(void) {
	int data;
	printf("Digite uma data no formato DDMMAAAA, onde DD corresponde ao dia, MM ao mês e AAAA ao ano: \n");
	scanf("%d", &data);
	printf("%d de %d de %d\n", (data / 1000000), ((data / 10000) % 10), (data % 10000));
	return 0;
}
