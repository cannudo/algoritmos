/* [Lista duplamente ligada]
* Estrutura de dados linear consistida de uma sequência de elementos
* chamados "nós". Cada nó tem dois ponteiros e um valor. O primeiro
* ponteiro aponta para um nó anterior (cabeça). O outro aponta para um nó
* posterior (cauda).
*/

#include <stdio.h>
#include <stdlib.h>

struct no {
    int valor;
    struct no* anterior;
    struct no* proximo;
};

struct listaDuplamenteLigada {
    struct no* cabeca;
    struct no* cauda;
    int size;
};

struct listaDuplamenteLigada* alocarMemoriaListaDuplamenteLigada() {
    struct listaDuplamenteLigada* lista = (struct listaDuplamenteLigada*) malloc(sizeof(struct listaDuplamenteLigada));
    lista->cabeca = NULL;
    lista->cauda = NULL;
    lista->size = 0;
    return lista;
};

int main() {
    struct listaDuplamenteLigada* lista = alocarMemoriaListaDuplamenteLigada();
    printf("%d\n", lista->size);
    return 0;
} 