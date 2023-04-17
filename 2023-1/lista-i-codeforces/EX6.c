#include <stdio.h>
    
int main() {
    int x, sucessor;
    scanf("%d", &x);
    if ((x + 1) % 2 == 0) {
        sucessor = x + 1;
    } else {
        sucessor = x + 2;
    }
    printf("%d\n", sucessor);
    return 0;
}