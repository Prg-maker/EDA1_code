#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

// insersao 
void insert_in_first(No **lista , int num){
    No *novo = maclloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        novo -> proximo = *lista;
        *lista = novo;

         

    }else{
        printf("erro ao alocar memoria\n");
        return ;
    }
}
void insert_to_end(No **lista , int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
    }else   
        printf("Erro ")
}
int main(){


    return 0;
}