#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int *p = &num; 
	
	
	printf("Valor de num %d\n", num);
	
	printf("Endereço de num %p\n",&num);
	printf("Valor de p %p\n", p);
	printf("Valor apontado de p %d\n", *p);
	return 0;
}


