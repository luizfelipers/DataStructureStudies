typedef struct arv Arv;

Arv* criar_vazia();

Arv* criar(char c, Arv* sae, Arv* sad);

int vazia(Arv* a);

void imprimir(Arv* a);

Arv* liberar(Arv* a);

int pertence(Arv* a, char c);
