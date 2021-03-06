#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define SALTO_MAXIMO 6
#define TIPO_CANO 'C';
#define TIPO_NORMAL 'N';

struct no{
    char tipo;
    int altura;
    struct no *prox;
};

typedef struct no NoFatia;


NoFatia * inicializa();
NoFatia * criaNovaFatia(int h, char t);
NoFatia * insere(NoFatia * l, int h, char t);

//implementar estas fun��es
void impFatias(NoFatia * l);
int faseImpossivel(NoFatia* fatias, int puloMaximo);
void canoNoFinal(NoFatia* fatias);

#endif // FUNCOES_H_INCLUDED
