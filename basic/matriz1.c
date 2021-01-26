#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2 


//matriz representada por vetor simples utilizando alocação dinâmica
int main()
{
 
 // mat[i][j]
//declaração de endereço inicial da matriz
int *mat;

//iterador
int i;


//alocação dinâmica ded Memória
mat = (int*)malloc(LIN*COL* sizeof(int));


if(mat==NULL){
    printf("Memória insuficiente");
    exit(1);
}
//preencher matriz
    for(i=0;i<LIN * COL; i++){
        mat[i] = i;
    }
 //acessar elemento da primeira linha e segunda coluna
 // k = i*n + j -> k = i*(LIN * COL) + J
 
 // int ind = 0 * LIN * COL + 1;
    printf("%d\n", mat[3]);
    
    return 0;
}
