#include <stdio.h>
#include <stdlib.h>

typedef struct _celula{
    int val;
    struct _celula *prox;
}Celula;
typedef struct lista
{
    Celula * begin;
    Celula * end;
}Lista;


Celula * Create_celula(int val){
    Celula *p = (Celula*) calloc(1,sizeof(Celula));
    p ->val = val;
    
}

Lista * CreateList(){
    Lista *L = (Lista*) calloc(1, sizeof(Lista));
    L->begin = NULL;
    L->end = NULL;

}


void Celula_add_last(Lista *L, int val){
    Celula *p = Create_celula(val);

    if(L ->begin == NULL){
        L->begin =  p;
        L->end = p;
       
    }else{
        L->end-> prox = p; 
        L->end = L->end->prox;
    }
}


void imprimir_sem_rec(const Lista *L){
    Celula *p = L->begin;
    while(p!= NULL){
        printf("%d -> " , p->val);
        p=p->prox;
    }

    printf("NULL\n");
}

void imprimir_rec(const Celula *p){

    if(p  == NULL){ 
        printf("NULL\n");
        return;
    }

    printf("%d -> ", p->val);

    return imprimir_rec(p->prox);

}

void imprimir(const Lista *L){
    imprimir_rec(L->begin);
}
int main(){

    Lista *lista  = CreateList();
    Celula_add_last(lista, 10);
    Celula_add_last(lista, 20);
    Celula_add_last(lista, 30);
    Celula_add_last(lista, 40);
    imprimir(lista);

}