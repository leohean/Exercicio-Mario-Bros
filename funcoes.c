/*Nome: Leonardo Henrique Cardoso RA19132 2°INF-D*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

NoFatia * inicializa(){
    return NULL;
}

NoFatia * criaNovaFatia(int h, char t){
    NoFatia * aux = (NoFatia *) malloc(sizeof(NoFatia));
    aux->altura = h;
    aux->tipo = t;
    aux->prox = NULL;
    return aux;
}

NoFatia * insere(NoFatia * l, int h, char t){
    NoFatia * nova = criaNovaFatia(h, t);
    NoFatia * aux=l;
    if(aux!=NULL){
        while(aux->prox!=NULL){
            aux=aux->prox;
        };
        aux->prox=nova;
    }else{
        l=nova;
    }

     return l;
}

void impFatias(NoFatia * l){
    NoFatia* aux;
    for(aux=l;aux!=NULL;aux=aux->prox){
        printf("\n%i %c",aux->altura,aux->tipo);
    }
}

int faseImpossivel(NoFatia* fatias, int puloMaximo){
    NoFatia* ax=fatias;
    while(ax!=NULL){
        if(ax->altura>puloMaximo){
            return 1;
        }
        ax=ax->prox;
    }

    return 0;
}

void canoNoFinal(NoFatia* fatias){
    NoFatia *p;
    NoFatia *i;
    while(p!=NULL){
      i=p;
      p=p->prox;
    }
    if(i->tipo=='N'){
        NoFatia *n=criaNovaFatia(i->altura, 'C');
        i->prox=n;
    }
}

