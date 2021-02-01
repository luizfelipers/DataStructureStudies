
#include <stdio.h>
#include <stdlib.h>


// busca linear (numero de elementos, vetor a ser vasculhado, item buscado)
int busca_linear(int n, int* v, int e){
    
    //contador i
    int i;
    
    //percorre o vetor inteiro
    for(i = 0; i<n; i++){
        
        //caso o elemento do vetor for igual ao elemento procurado
        if(v[i] == e)
            //retorna a posição do elemento procurado no vetor
            return i;
    }
   //percorreu todo o vetor e não encontrou o elemento
    return -1 ;
    
    
}

int main()
{
//inicializacao de vetor
int v[]= {10, 25, 5, 6, 20, 19};
int tam = sizeof(v) / sizeof(int);

printf("%d \n", busca_linear(tam, v, 5));
    return 0;
}
