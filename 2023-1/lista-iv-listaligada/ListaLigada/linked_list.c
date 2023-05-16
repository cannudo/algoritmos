#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct linked_list_node{
  int value;
  struct linked_list_node *next;
};

struct linked_list{
  struct linked_list_node *first, *last;
};

/* Cria e retorna uma nova lista com 0 elementos.
Se a lista não for criada retorna NULL (0) */
struct linked_list * ll_create(){
  struct linked_list * new_list;
  new_list = (struct linked_list*)malloc(sizeof(struct linked_list));
  if (new_list != 0){
    new_list->first=0;
    new_list->last=0;
  }
  return new_list;
}

/* Inserir no início da lista */
void ll_push_front(linked_list list, int value){
  struct linked_list_node *novo_no = (struct linked_list_node*)malloc(sizeof(struct linked_list_node));
  if(novo_no == 0) {
    fprintf(stderr, "[ERRO] Erro ao alocar memória para o novo nó.\n");
    exit(-1);
  }
  novo_no->value = value;

  if(list->first == 0) {
    novo_no->next = 0;
    list->first = novo_no;
    list->last = novo_no;
  } else {
    novo_no->next = list->first;
    list->first = novo_no;
  }
}

/* Imprime a lista no arquivo file */
void ll_write(linked_list list,FILE * file){
  printf("[");
  struct linked_list_node * current = list->first;
  if (current != NULL){
    fprintf(file,"%d",current->value);
    current=current->next;
    while (current!=NULL){
      fprintf(file, ", %d",current->value);
      current=current->next;
    }
  }
  fprintf(file,"]\n");
}