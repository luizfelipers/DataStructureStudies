#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//LISTAS ENCADEADAS



//chamada função principal Main()
int main()
{
    //declarando variável do tipo lista
    Lista* lista;
    //cria lista vazia
    lista = criar_lista();
    
    //verificando conteúdo da lista antes da inserção de dados
    if(vazia(lista)){
        printf("Lista vazia! \n");
    }
    else{
        printf("Lista NÃO está vazia");
    }
    
    //inserindo uma série de elementos na lista
    lista = inserir_lista(lista,10);
    lista = inserir_lista(lista,30);
    lista = inserir_lista(lista,40);
    lista = inserir_lista(lista,25);
    lista = inserir_lista(lista,22);
    lista = inserir_lista(lista,49);
    lista = inserir_lista(lista,20);
    imprimir_lista(lista);

//verificando o conteúdo da lista após inserção de dados
 if(vazia(lista)){
        printf("Lista vazia! \n");
    }
    else{
        printf("Lista NÃO está vazia \n ");
    }
    
    
    //declaração de elemento a ser buscado na lista
    int elemento = 10;
    
    
    //verificação se elemento declarado acima está contido na lista
    //a partir da função criada para buscar a lista.
    if(buscar_lista(lista, elemento) == NULL){
        printf("Não encontrou o elemento buscado: %d \n", elemento);
    }
    else{
        printf("Encontrou o elemento buscado: %d \n", elemento);
    }
    
    
    //declaração de elemento não contido na lista
    int elemento2 = 12;
    //busca por elemento não contido na lista
    if(buscar_lista(lista, elemento2) == NULL){
        printf("Não encontrou o elemento buscado: %d \n", elemento2);
    }
    else{
        printf("Encontrou o elemento buscado: %d \n", elemento2);
    }
    
    //remove item numero 20
    lista = remover(lista, 20);
    imprimir_lista(lista);
    
    
    return 0;
}
