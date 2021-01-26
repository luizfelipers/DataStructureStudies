struct pessoa{
    int idade;
    float peso;
};

//STRUCTS
int main()
{
    struct pessoa p;
    struct pessoa *pp;
    
    p.idade = 20;
    p.peso = 73.45;

printf(" A pessoa tem %d anos e pesa %f kg \n", p.idade, p.peso);

//reescrever o struct recebendo valores do usuario
printf("Digite sua idade: ");
scanf("%d", &p.idade);

printf("Digite seu peso: ");
scanf("%f", &p.peso);

printf(" A pessoa tem %d anos e pesa %f kg \n", p.idade, p.peso);
    
    //acessando o valor através de ponteiro e seta
    printf(" A pessoa tem %d anos e pesa %f kg \n", pp->idade, pp->peso);
    
    
  //alocação dinamica de struct
    
    struct pessoa *m;
    
    m = (struct pessoa*)malloc(sizeof(struct ponto));
    //acessando os valores através da seta
    m->idade = 30;
    m->peso = 85;
    
    //printando os valores através do acesso via ponteiro
     printf(" A pessoa tem %d anos e pesa %f kg \n", m->idade, m->peso);
 return 0;
}
