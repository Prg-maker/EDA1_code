#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct celula
{
    int val;
    struct celula * prox;
}Celula;



typedef struct lista{
    Celula *  begin;
    Celula *  end;
}Lista;


Lista * createList(){
    Lista * L = (Lista*)calloc(1, sizeof(Lista));
    L->begin = NULL;
    L->end = NULL;
    return L;
    
}
Celula * createCelula(int val){
    Celula * celula = (Celula*)calloc(1, sizeof(Celula));
    celula -> val = val; 
    return celula;
}

// add fist in head
bool LinkedList_is_empty(const Lista *L){
    return (L->begin == NULL && L-> end == NULL) ;
}

void add_fist(Lista*L, int val){
    Celula * celula = createCelula(val);
    celula->prox = L->begin;
    L->begin = celula;
}

void imprimir(const Celula * celula ){
    if(celula == NULL){
        printf("NULL");
        return;
    }
    printf("%d "  , celula->val);

    return imprimir(celula->prox);
}

void imprimitC (Lista * L){
    imprimir(L->begin);
}


int main(){

    Lista *lista = createList();
    add_fist(lista, 10);
    add_fist(lista, 30);
    add_fist(lista, 20);
    imprimitC(lista);

    return 0;
}