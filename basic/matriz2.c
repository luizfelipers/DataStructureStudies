#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 3 


//matriz representada por vetor de ponteiros
int main()
{
    //declaração de matriz representada por ponteiro de ponteiro
    int **mat, i;
    
    //alocando o vetor de ponteiros na memória
    mat = (int**)malloc(LIN * sizeof(int));
 
//alocar cada linha da matriz atribuindo
//os enderecos do vetor de ponteiros criados

    for(i = 0; i < LIN; i++){
        mat[i] = (int*)malloc(COL * sizeof(int));
    }

//passando valores para o começo da matriz
mat[0][0] = 10;
mat[0][1] = 20;

//printando o segundo elemento da matriz
printf("%d\n", mat[0][1]);

//liberando espaço da memória das linhas da matriz
for(i=0;i<LIN;i++){
    free(mat[i]);
}
//liberando espaço da memória da matriz criada
free(mat);

 return 0;
}
