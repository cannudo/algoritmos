    #include <stdio.h>
     
    int soma(int a, int b) {
      return a + b;
    }
     
    int main(void) {
      int a, b;
      scanf("%d %d", &a, &b);
      printf("%d\n", soma(a, b));
      return 0;
    }