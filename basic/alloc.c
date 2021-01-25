#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    //alocação dinâmica de memória
    v = (int*)malloc(10 * sizeof(int));
    
    if(v == NULL){
        printf("Memória insuficiente \n");
        exit(1);
    }

    v[0] =10;
    v[1]=20;
    
    //printa apenas o primeiro valor do vetor v
    printf("%d \n", v[0]);
    
    //libera o espaço reservado pela malloc do vetor v
    free(v);

    return 0;
}
