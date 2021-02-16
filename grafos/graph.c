

#include <stdio.h>

int main()
{         //hardcoding a matrix with it's values
                            //a           b          c            d          e
    int matriz1[5][5] = {{0,0,1,0,0},{0,0,1,0,0},{1,1,0,1,1},{0,0,1,0,1},{0,0,1,1,0}};
    
    // function that checks if there's a lik between nodes 
    int tem_ligacao(int x, int y)
    {
        return matriz1[x][y];
    }
    //checking it there's a link between A and C
    if(tem_ligacao(0,2)==0){
        printf("não tem ligação de A para C");
    }
    else{
        printf("Tem ligação de a para c");
    }
    
  //conta o grau de cada vértice/nó
    for(i=1; i<=5;i++){
        grau = 0;
            for(j = 1; j <=5; j++){
                if(matriz[i][j]==1){
                    grau++
                }
            }
            print("O nó %d tem grau %d \n ", i, grau)
    }
      
  
    return 0;
}
