#include <stdio.h>

/* Função Fatorial*/

int fatorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main()
{
    printf("Digite um número para calcular seu fatorial: \n");
    int num;
    scanf("%d", &num);
    //chamada da função fatorial dentro da main 
    printf("Fatorial de %d = %d \n", num, fatorial(num));
    
    return 0;
}
