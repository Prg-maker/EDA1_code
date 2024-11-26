#include <stdio.h>
#include <stdlib.h>


typedef struct celula{
	int dado ;
	struct celula * prox;
}Celula;

typedef struct lista{
	Celula * begin ;
	Celula * end;
}Lista;


Lista * create_list(){
	Lista * lista = (Lista*)calloc(1, sizeof(Lista));

	lista->begin = NULL;
	lista ->end = NULL;
	return lista;

};

Celula * create_celula(int dado){
	Celula * celula = (Celula*)calloc(1, sizeof(Celula));
	celula ->prox = NULL;
	celula ->dado = dado;
	return celula;
}
void add_first(Lista * lista,int dado){
	Celula * c = create_celula(dado);

	c->prox = lista->begin;
	lista->begin = c;
	
}

void imprimir(const Lista * lista){
	Celula * celula = lista->begin;

	while(celula!= NULL){
		printf(" %d -> ", celula->dado);
		celula = celula->prox;
	}
	printf("NULL\n");
}

Celula * busca_i(const Lista * lista, int dado){
	Celula * celula = lista->begin;
	
	while(celula != NULL){
		
		if(celula->dado == dado){
			return celula;
		}

		celula = celula ->prox;

	}
	return NULL;
}

Celula *busca(Celula * celula, int dado){
	if(celula == NULL)return NULL;

	if(celula->dado == dado){
		return celula;
	}

	return busca(celula->prox , dado);
}

Celula * busca_c(Lista * lista , int dado){

	if(lista -> end == NULL & lista -> begin == NULL){
		printf("Nao tem nenhum elemento na lista");
		return NULL;
	}
	Celula * celula = busca(lista->begin, dado);

	return celula;
}

int main(){
	Lista * lista = create_list();

	add_first(lista, 3);
	add_first(lista, 4);
	imprimir(lista);

	//Celula *  c = busca(lista, 2);

	//printf("\n");
	//printf(" number : %d " , c->dado);
	Celula * c = busca_c(lista , 2);

	printf("number: %d" , c->dado);
}
