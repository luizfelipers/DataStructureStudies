typedef struct lista Lista;

//Tipo Abstrato de Dados

//função de criação da lista
Lista* criar_lista();

//função que insere no início da Lista
Lista* inserir_lista(Lista* l, int i);

//função que imprime a lista
void imprimir_lista(Lista* l);
