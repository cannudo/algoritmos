#ifndef __LINKED_LIST__
#define __LINKED_LIST__
#include <stdio.h>

typedef struct linked_list * linked_list;

/* Cria e retorna uma nova lista com 0 elementos.
 * Se a lista não for criada retorna NULL (0)
*/
struct linked_list * ll_create();

/* Inserir no início da lista */
void ll_push_front(linked_list list, int x);

/* Imprime a lista no arquivo file */
void ll_write(linked_list list, FILE* file);

#endif /* Linked List */