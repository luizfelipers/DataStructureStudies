#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{
    Arv* a1 = criar('m', criar_vazia(), criar_vazia());
    Arv* a2 = criar('a', criar_vazia(), a1);

    return 0;
}
