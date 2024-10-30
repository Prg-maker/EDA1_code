#include <stdio.h>

int main(){
	char nome1 [100];
	scanf(" %99[^\n]", nome1);

	char nome2 [100];
	scanf(" %99[^\n]", nome2);

	char nome3 [100];
	scanf(" %99[^\n]", nome3);

	printf("1 Nome: %s" ,nome1 );
	printf("2 Nome: %s" ,nome2 );
	printf("3 Nome: %s" ,nome3 );


}
