#include <stdio.h>

int main(){
    long int vezes, parcela, soma = 0;
    scanf("%ld", &vezes);

    while(vezes >= 1) {
        scanf("%ld",  &parcela);
        soma = soma + parcela;
        vezes--;
    }

    printf("%ld\n", soma);

    return 0;
}