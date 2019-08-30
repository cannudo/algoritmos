#include <stdio.h>

int main(void) {
	int leitura;
	printf("João, digite um número de quatro algarismos: ");
	scanf("%d", &leitura);
	printf("Na ordem inversa, o número digitado foi %d%d%d%d\n", (leitura % 10), (leitura / 10) % 10, (leitura / 100) % 10, (leitura / 1000) % 10);
	return 0;
}
