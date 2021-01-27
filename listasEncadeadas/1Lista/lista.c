#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//implementação de LISTAS

struct lista{
    int info;
    struct lista* prox;
};

Lista* criar_lista(){
    return NULL;
};
//implementação que insere novo nó na lista através de dalocação dinâmica
Lista* inserir_lista(Lista* l, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo -> info = i;
    //mantendo o encadeamento através da atribuição do valor da lista para ponteiro o próximo elemento
    novo -> prox = l;
    return novo;
}

void imprimir_lista(Lista* l){

//criação de variável auxiliar para percorrer a lista
Lista* p;
//laço para percorrer a lista
for(p=l; p!=NULL;p=p->prox){
    printf("%d \n", p-> info);
}


};

int vazia(Lista* l){
    if(l==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
