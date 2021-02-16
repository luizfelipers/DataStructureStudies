

#include <stdio.h>

int main()
{                           //a           b          c            d          e
    int matriz1[5][5] = {{0,0,1,0,0},{0,0,1,0,0},{1,1,0,1,1},{0,0,1,0,1},{0,0,1,1,0}};
    
    int tem_ligacao(int x, int y)
    {
        return matriz1[x][y];
    }

    if(tem_ligacao(0,2)==0){
        printf("não tem ligação de A para C");
    }
    else{
        printf("Tem ligação de a para c");
    }
    
    
    return 0;
}
