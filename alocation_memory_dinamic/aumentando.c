#include <stdio.h>
#include <stdlib.h>

int main(){

	int i ,tam , *vet;

	scanf(" %d", &tam);

	vet = malloc(tam *sizeof(int));


	if(vet == NULL){
		printf("Erro");
		return 0;

	}

	for(int i = 0 ; i < tam ; i++){
		*(vet +i) = i;
	}

	for(int i= 0 ; i < tam ; i++){
		printf(" %d" , *(vet +i) );
	}

	printf("\nnovo tam");
	scanf(" %d" ,&tam);
	vet = realloc(vet ,tam* sizeof(int));

	for(int i = 0 ; i < tam ; i++){
		*(vet +i) = i;
	}

		for(int i= 0 ; i < tam ; i++){
		printf(" %d", *(vet +i) );
	}

	free(vet);
	return 0;
}
