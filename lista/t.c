#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} Celula;

typedef struct lista {
    Celula *begin;
    Celula *last;
} Lista;

Lista *create_list() {
    Lista *L = (Lista *)calloc(1, sizeof(Lista));
    if (L == NULL) {
        fprintf(stderr, "Erro ao alocar memoria\n");
        exit(1);
    }
    L->begin = NULL;
    L->last = NULL;
    return L;
}

Celula *create_celula(int val) {
    Celula *celula = (Celula *)calloc(1, sizeof(Celula));
    if (celula == NULL) {
        fprintf(stderr, "Erro ao alocar memoria\n");
        exit(1);
    }
    celula->dado = val;
    celula->prox = NULL;
    return celula;
}

void add_list_last(Lista *L, int val) {
    Celula *celula = create_celula(val);
    if (L->begin == NULL && L->last == NULL) {
        L->begin = celula;
    } else {
        L->last->prox = celula;
    }
    L->last = celula;
}

void printList(const Lista *L) {
    Celula *c = L->begin;
    while (c != NULL) {
        printf("%d -> ", c->dado);
        c = c->prox;
    }
    printf("NULL\n");
}

int main() {
    Lista *lista = create_list();
    add_list_last(lista, 1);
    add_list_last(lista, 2);
    add_list_last(lista, 3);
    printList(lista);
    return 0;
}

