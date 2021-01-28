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

//função que realiza busca por elemento passado por referência, dentro de uma lista
Lista* buscar_lista(Lista* l, int v){
    Lista* p;
    
    for(p=l;p!=NULL;p=p->prox){
        if(p->info == v){
            return p;
        }
        
    }
    return NULL;
   
}

Lista* remover(Lista* l, int v){
    Lista* ant = NULL; //ponteiro para o elemento anterior
    Lista* p = l; //ponteiro para percorrer a lista
    
    while(p != NULL && p->info != v){
        
        ant = p;
        p = p->prox;
    }
    //se ponteiro retornar Nulo(não encontrar o elemento a ser removido), retorna  a lista sem modificações
    if(p == NULL)
        return l;
        
    //remoçao do inicio da lista
    if(ant == NULL){
          l = p->prox;
    }
      
        //remove do meio da lista
    else{
        //ponteiro do nó anterior para o próximo elemento
        //passa a apontar para o elemento seguinte do elemento excluidi
        ant -> prox = p -> prox;
    }
    free(p);
    return l;
  
    
};
