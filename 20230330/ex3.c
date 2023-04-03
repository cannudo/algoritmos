#include <stdio.h>

int multiplicacao(int a, int b){
    int m = a*b;
    return m;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b); // echo "10 2" | ./ex3
    printf("%d\n", multiplicacao(a,b));
    return 0;
}