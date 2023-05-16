#include <stdio.h>
#include <stdlib.h>

struct array_list {
  int *data; /* ponteiro para um array */
  unsigned int size; /* quantos elementos estão preenchidos */
  unsigned int capacity; /* capacidade máxima */
};

void array_list_increase_capacity(struct array_list *list) {
  int *new_data = (int*)malloc(sizeof(int)*list->capacity + 10);
  for(int i = 0; i < list->size; i++) {
    new_data[i] = list->data[i];
  }
  free(list->data);
  list->data = new_data;
  list->capacity = list->capacity + 10;
}

struct array_list *array_list_create() { /* retorno: ponteiro para um struct array_list */
  struct array_list *new_list;
  new_list = (struct array_list *)malloc(sizeof(struct array_list)); /* aloque 16 bytes para new_list */
  if (new_list == 0) { /* se a alocação falhar, new_list recebe null. Null é igual a 0 */
    // Error
    fprintf(stderr, "Error on memory allocation.\n");
    exit(-1);
  }
  new_list->capacity = 10;
  new_list->size = 0;
  new_list->data = (int *)malloc(sizeof(int) * new_list->capacity); /* aloque 4 vezes new_list->capacity */
  if (new_list->data == 0) {
    // Error
    fprintf(stderr, "Error on memory allocation.\n");
    exit(-1);
  }
  return new_list /* retorne o ponteiro para o struct new_list */;
}

void array_list_append(struct array_list *list, int value) {
  
}

void array_list_read_until(struct array_list *list, int end_reading) {
  int x;
  while (scanf("%d", &x), x != end_reading) {
    if (list->size == list->capacity)
      array_list_increase_capacity(list);
    list->data[list->size++] = x;
  }
}

void array_list_print(struct array_list *list) {
  printf("[");
  if (list->size > 0) {
    printf("%d", list->data[0]);
    for (int i = 1; i < list->size; ++i)
      printf(", %d", list->data[i]);
  }
  printf("]");
}

int main() {
  struct array_list *list01;
  list01 = array_list_create(); // list01 vai receber o ponteiro de array_list_create()
  array_list_read_until(list01, -1);
  array_list_print(list01);
  printf("\n");
  //free(list01->data);
  //free(list01);
  return 0;
}