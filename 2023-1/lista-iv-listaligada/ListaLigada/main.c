#include <stdio.h>
#include "linked_list.h"

int main(void) {
  linked_list list01 = ll_create();
  int x;

  ll_write(list01, stdout);
  while(scanf("%d",  &x) != EOF) {
    ll_push_front(list01, x);
  }
  ll_write(list01, stdout);
  
  printf("\n");
  return 0;
}