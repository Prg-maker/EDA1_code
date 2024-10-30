#include <stdio.h>
#include <stdlib.h>

int main(){

	int *x;
	//x = malloc(sizeof(int));
	x = calloc(2, sizeof(int));
	if(x == NULL){
		printf("Erro ao alocar memoria!\n");
		return 0 ;
	}
	printf("x: %d\n", *x);
	printf("Me moria alocada com sucesso\n");
	*x = 50;

	printf("%d \n" , *x);
	return 0;
}
