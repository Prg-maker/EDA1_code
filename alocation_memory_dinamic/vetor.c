#include <stdio.h>
#include <stdlib.h>

int main(){
	
	 int tam , *vet;



	scanf(" %d" , &tam);
	vet = malloc(tam*sizeof(int));
	if(vet == NULL){
		printf("erro ao alocar memoria");
		return 0;
	}


	for(int i = 0 ; i < tam ; i++)*(vet+i) = i;
	
	for(int i = 0 ; i<tam ; i++)printf(" %d", *(vet+i));

	return 0;
}
