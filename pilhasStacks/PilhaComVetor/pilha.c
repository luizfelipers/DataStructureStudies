#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"



#define N 50



struct pilha{
    int n;
    float vet[N];
};

Pilha* criar_pilha(){
    
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
   p-> n = 0;
   return p;
}

void push(Pilha* p, float v){
    
    //caso o tamanho da pilha com o novo elemento
    //iguale/exceda o tamanho da pilha, o programa pára
    if(p->n == N){
        printf("Capacidade Máxima \n");
        exit(1); //aborta o programa
    }
    p ->vet[p->n] = v;
    p ->n++;
   return v;
}

float pop(Pilha* p){
    float v;
    if(vazia(p)){
        printf("Pilha vazia \n");
        exit(1);
    }
    v = p-> vet[p->n -1];
    p->n--;
    return v;
}

int vazia(Pilha* p){
    
    return (p-> n == 0);
}

void liberar(Pilha* p){
    
    free(p);
}

float topo(Pilha* p){
    
    if(vazia(p))
    {
        printf("Pilha vazia \n");
        exit(1);
        
    }
    return p-> vet[p->n-1];
}