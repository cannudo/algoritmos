#include <stdio.h>

void swap(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int a = 25, b = 50;
  int *pa, *pb;
  pa = &a;
  pb = &b;

  swap(pa, pb);
  
  return 0;
}