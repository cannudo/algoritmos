#include <stdio.h>

int main(){
    signed long int fator, quantidade, leitor, multiplos = 0;
    scanf("%ld %ld", &fator, &quantidade);

    for (int i = 0; i < quantidade; i++) {
        scanf("%ld", &leitor);
        if (leitor % fator == 0) {
            multiplos++;
        }
    }

    printf("%ld\n", multiplos);

    return 0;
}