

#include <stdio.h>
#include "pilha.h"

int main()
{
  Pilha* p;
  
  p = criar_pilha();
  push(p, 10);
  push(p, 20);
  push(p, 30);
  push(p, 40);
  push(p, 50);
  
  printf("Topo: %.2f \n", topo(p));
  //operação Pop para desempilhar elemento
 pop(p);
 
   printf("Novo Topo: %.2f \n", topo(p));

    return 0;
}
