
#include <stdio.h>
#include <stdlib.h>


// busca binaria em vetor ordenado(numero de elementos, vetor a ser vasculhado, item buscado)
int busca_binaria(int n, int* v, int e){
  
  int ini = 0;
  int fim = n-1;
  int meio;
  
  //enquanto a lista não estiver vazia
  while(ini <= fim){
      //calcula a posição média do vetor
      meio = (ini+fim)/2;
      //caso o elemento procurado seja menor que o meio
      if(e < v[meio])
      //o elemento está na primeira metade
        fim = meio -1;
        //se o elemento procurado for maior que o meio
      else if(e > v[meio])
      //procura na segunda metade
        ini = meio +1;
        //último caso
      else
      //retorna o próprio valor do meio
        return meio;
  }
  //caso não encontre, retorna -1
  return -1;
    
    
}

int main()
{
//inicializacao de vetor
int v[]= {1 , 4 , 9 ,13, 29, 45,68,94};
int tam = sizeof(v) / sizeof(int);

printf("%d \n", busca_binaria(tam, v, 13));
    return 0;
}
