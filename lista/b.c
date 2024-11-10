#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
	struct celula *prox;
	int dado;
}Celula;

typedef struct lista{
	Celula * begin;
	Celula * end;
}Lista;

Lista * create_lista(){
	Lista * lista = (Lista*)calloc(1, sizeof(Lista));
	lista->begin = NULL;
	lista->end = NULL;

	return lista;

}

Celula * create_celula(int val){

	Celula * celula = (Celula*)calloc(1, sizeof(Celula));
	celula -> dado = val;

	return celula;
}

void print_list(const Lista * list){
	Celula * celula = list->begin;

	while(celula != NULL){
		printf("%d -> " , celula->dado);

		celula = celula->prox;
	}

	printf("NULL ");
}
void insere_inicio(Lista * L, int val){
	Celula * celula = create_celula(val);

	if(L->begin == NULL && L->end == NULL){
	
		L->end = celula;
	}else{
		celula->prox = L->begin;
	
	}

	L->begin = celula;
}


int buscar(Lista * lista , int val){
	
	Celula * celula = lista->begin;
	if(lista == NULL){
		return 0 ;
	}
	
	while(celula  != NULL){
		if(celula->dado  == val){
			return val;
		}
		if(celula->prox == NULL){
			printf("Numero nao encontrado");
			break;
		}
		celula = celula ->prox;
	}

	return 0;
}

void adicionar_antes(Lista * lista ,int val , int ref ){

	Celula *c = create_celula(val ) , * r = create_celula(ref)  , * p = lista -> begin ;
	if(lista == NULL){
		printf("Nao alocado");
		return ;
	}
	Celula *q=NULL;
	
	if(lista->begin->dado == ref){
		
		c->prox = lista->begin ;

		lista->begin = c;
		return;
	}
	while(p!= NULL){
		
		if(p->dado == r->dado){

			c -> prox = r;
			q->prox = c;
			break;
		}
		q = p;
		p = p->prox;
	}
}
int main(){
	Lista * lista = create_lista();
	
	insere_inicio(lista , 1);
	insere_inicio(lista, 2);
	print_list(lista);
	
	adicionar_antes(lista , 4, 2);
	print_list(lista);


	return 0;
}
