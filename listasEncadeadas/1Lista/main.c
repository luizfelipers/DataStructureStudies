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
    imprimir_lista(lista);

 if(vazia(lista)){
        printf("Lista vazia! \n");
    }
    else{
        printf("Lista NÃO está vazia");
    }
    
    
    return 0;
}
