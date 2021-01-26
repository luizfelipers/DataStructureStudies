struct pessoa{
    int idade;
    float peso;
};

//STRUCTS
int main()
{
    struct pessoa p;
    
    p.idade = 20;
    p.peso = 73.45;

printf(" A pessoa tem %d anos e pesa %f kg \n", p.idade, p.peso);

//reescrever o struct recebendo valores do usuario
printf("Digite sua idade: ");
scanf("%d", &p.idade);

printf("Digite seu peso: ");
scanf("%f", &p.peso);

printf(" A pessoa tem %d anos e pesa %f kg \n", p.idade, p.peso);
 return 0;
}
