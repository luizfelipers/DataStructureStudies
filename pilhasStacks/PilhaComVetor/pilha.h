
//TAD para definição da pilha
typedef struct pilha Pilha;

//criação da pilha
Pilha* criar_pilha();

//função para inserir elementos no topo da pilha
void push(Pilha* p, float v);

//função para retirar elementos do topo da pilha
float pop(Pilha* p);

//retorna 1 ou 0, caso a pilha esteja vazia.
int vazia(Pilha* p);

//libera a memória ocupada pela pilha declarada
void liberar(Pilha* p);

float topo(Pilha* p);