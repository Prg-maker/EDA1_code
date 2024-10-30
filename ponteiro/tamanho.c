#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p ;
	//printf("%zu" , sizeof(p));

	int vet[] = {1 ,2 ,3 };
	int *a = vet;
	
	//printf(" \n %zu" , sizeof(vet));
	printf(" %d" ,*(a+1));
	return 0;
}
