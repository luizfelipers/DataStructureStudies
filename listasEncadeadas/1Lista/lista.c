#include <stdlib.h>
#include "lista.h"

//implementação de LISTAS

struct lista{
    int info;
    struct lista* prox;
};

Lista* criar_lista(){
    return NULL;
}
//implementação que insere novo nó na lista através de dalocação dinâmica
Lista* inserir_lista(Lista* l, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo -> info = i;
    //mantendo o encadeamento através da atribuição do valor da lista para ponteiro o próximo elemento
    novo -> prox = l;
    return novo;
}