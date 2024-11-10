#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    struct _node * prox;
    int val;
}Node;

typedef struct _lista{
    Node * begin;
    Node * end;
    int total ;

}Lista;

Lista * createList(){
    Lista * L = (Lista*) calloc(1 , sizeof(Lista));
    L->begin = NULL;
    L->end = NULL;

    L->total = 0 ;

    return L;
}

Node * createNode(int val){
    Node * node = (Node*) calloc(1, sizeof(Node));
    node -> val = val;
    return node;
}


void add_first(Lista *lista,int val){
    Node * node = createNode(val);
    lista->total++;
    if(lista->begin == NULL){
        lista-> begin  = node;
        return ;
    }
    node -> prox = lista -> begin;
    lista->begin = node;
}
void imprimir(const Lista* lista ){
    Node *node = lista->begin;

    while(node != NULL){
        printf("%d -> ", node->val);
        node = node->prox;
    }
    printf("NULL \n");
    printf("total:%d ", lista->total);
}

Node * menorValor(Lista * lista){
    Node * node = lista->begin;
    Node * menor = node;
    while(node != NULL){
        if(menor ->val > node->val ){
            menor = node;
        }

        node = node->prox;
    }   
    printf("%d ", menor->val);
    return menor;
}

int main(){
    Lista * lista  = createList();
    add_first(lista, 10);
    add_first(lista, 20);
    add_first(lista, 30);
    add_first(lista, 40);
    add_first(lista, 50);
    add_first(lista, 60);
    add_first(lista, 70);
    menorValor(lista);
}

