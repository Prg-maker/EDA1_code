#include <stdio.h>
#include <stdlib.h>

// Definição do nó da árvore
typedef struct No {
    int dado;
    struct No *esquerda, *direita;
} No;

// Função para criar um nó
No* criarNo(int dado) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = dado;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Função para o percurso in-order sem recursão
void percursoInOrder(No* raiz) {
    No* pilha[100]; // Pilha auxiliar
    int topo = -1;
    No* atual = raiz;

    while (atual != NULL || topo != -1) {
        while (atual != NULL) {
            pilha[++topo] = atual; // Empilha
            atual = atual->esquerda; // Vai para a esquerda
        }

        atual = pilha[topo--]; // Desempilha
        printf("%d ", atual->dado); // Processa o nó

        atual = atual->direita; // Vai para a direita
    }
}

int main() {
    // Criando a árvore manualmente
    No* raiz = criarNo(10);
    raiz->esquerda = criarNo(5);
    raiz->direita = criarNo(15);
    raiz->esquerda->esquerda = criarNo(2);
    raiz->esquerda->direita = criarNo(7);

    printf("Percurso in-order: ");
    percursoInOrder(raiz);
    printf("\n");

    return 0;
}

