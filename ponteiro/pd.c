#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[] = {1 , 2};

	int *p = vet;

	printf(" %d " , *(p+2));

	return 0;
}
