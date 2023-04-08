#include <stdio.h>

int volume(int largura1, int altura1, int profundidade1, int largura2, int altura2, int profundidade2){
    int q1 = largura1 * altura1 * profundidade1;
    int q2 = largura2 * altura2 * profundidade2;

    if (q1 == q2) {
        return 0;
    } else if (q1 > q2) {
        return 1;
    } else if (q2 > q1) {
        return 2;
    }

    return 0;
}

int main(){
    int largura1, altura1, profundidade1, largura2, altura2, profundidade2;
    scanf("%d %d %d",&largura1,&altura1,&profundidade1);
    scanf("%d %d %d",&largura2,&altura2,&profundidade2);
    printf("%d\n",volume(largura1,altura1,profundidade1, largura2,altura2,profundidade2));
    return 0;
}