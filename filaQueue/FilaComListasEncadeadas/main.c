
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila* f = criar_fila();
    
    //INSERINDO VALORES NA FILA
    inserir(f, 10);
    inserir(f, 30);
    inserir(f, 20);
    inserir(f, 250);
    //imprimir os valores existentes na fila
    imprimir(f);
    
    remover(f);
    
    //pulando linha
    printf("\n");
    //reimprimindo a lista
    imprimir(f);

    return 0;
}
