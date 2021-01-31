#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{
    Arv* a1 = criar('m', criar_vazia(), criar_vazia());
    Arv* a2 = criar('a', criar_vazia(), a1);

    Arv* a3 = criar('p', a1, a2);

    printf("%d \n", vazia(a1));
    imprimir(a3);
    return 0;
}
