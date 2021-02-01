
#include <stdio.h>
#include <stdlib.h>


// busca linear em vetor ordenado(numero de elementos, vetor a ser vasculhado, item buscado)
int busca_linear_ord(int n, int* v, int e){
    
    //contador i
    int i;
    
    //percorre o vetor inteiro
    for(i = 0; i<n; i++){
        
        //caso o elemento do vetor for igual ao elemento procurado
        if(v[i] == e)
            //retorna a posição do elemento procurado no vetor
            return i;
            //caso o elemento atual do vetor for maior que o elemento procurado
        else if (v[i] > e)
            //elemento não existe, pois o vetor está ordenado
            return -1;
    }
   //percorreu todo o vetor e não encontrou o elemento
    return -1 ;
    
    
}

int main()
{
//inicializacao de vetor
int v[]= {1 , 4 , 9 ,13, 29, 45,68,94};
int tam = sizeof(v) / sizeof(int);

printf("%d \n", busca_linear_ord(tam, v, 13));
    return 0;
}
