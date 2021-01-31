#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{
    Arv* a1 = criar('m', criar_vazia(), criar_vazia());
    Arv* a2 = criar('a', criar_vazia(), a1);

    Arv* a3 = criar('p', a1, a2);
    
    Arv* a4 = criar('p', a3, a2);

    printf("%d \n", vazia(a1));
    imprimir(a4);
    
    liberar(a4);
    return 0;
}
