#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct lista{
    
    //informação da lista
    float info;
    //ponteiro para próximo elemento da lista
    struct lista* prox;
};

struct fila{
    Lista* ini;
    Lista* fim;
    
};


//criar Fila

Fila* criar_fila(){
    //aloca memória para fila
    Fila* f = (Fila*)malloc(sizeof(Fila));
    
    //inicializa a fila vazia, de forma que o início e o fim sejam nulos
    f-> ini = f -> fim = NULL;
    return f;
    
}

void inserir(Fila* f, float v){
    Lista* n = (Lista*)malloc(sizeof(Lista));
    n -> info = v;
    n -> prox = NULL;
    
    //caso a fila esteja vazia
    if(f-> fim != NULL)
        f -> fim -> prox = n;
    else
        f -> ini = n;
    //fim aponta para o último elemento
    f-> fim = n;
}

float remover(Fila* f){
    
    Lista *t;
    float v;
    if(vazia(f)){
        printf("Fila vazia\n");
        exit(1);
    }
    t = f -> ini;
    v = t -> info;
    f -> ini = t -> prox;
    if(f -> ini == NULL)
        f-> fim = NULL;
    free(t);
    return v;
    
}

int vazia(Fila* f){
    return (f-> ini == NULL);
    
}

void liberar(Fila* f){
    Lista* q = f-> ini;
    
    while(q != NULL){
        Lista* t = q-> prox;
        free(q);
        q = t;
    }
    free(f);
    
}

void imprimir(Fila* f){
    Lista* q = f -> ini;
    
    while(q != NULL){
        printf("%f\n", q-> info);
        q = q->prox;
    }
    
    
    
}