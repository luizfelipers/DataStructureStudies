//função externa que altera o valor de um ponteiro
void f(int *n){
    
    *n = 20;
}


int main()
{
    
    int n = 10;
    int *p;
    
    //p recebe o endereço de n
   p = &n;
   //alteração do conteúdo de p
   *p = 30;
   
   printf("%d \n", n);
    
    //alteração do valor através de função externa, usando ponteiro e endereço
    f(&n);
    printf("%d  \n", n);
    
    return 0;
}
