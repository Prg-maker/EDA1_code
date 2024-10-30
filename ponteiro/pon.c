#include <stdio.h>
#include <stdlib.h>

int main(){


	int a = 10, *b, **c;

	b = &a;
	c = &b;
	printf("valor de b = %d , valor de c = %d", *b , **c);
	return 0 ;
}
