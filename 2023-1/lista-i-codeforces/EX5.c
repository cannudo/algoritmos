#include <stdio.h>
    
int main() {
    int n1, n2, p1 = 2, p2 = 3;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", ((n1 * p1) + (n2 * p2)) / (p1 + p2));
    return 0;
}