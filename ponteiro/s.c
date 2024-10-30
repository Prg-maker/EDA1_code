#include <stdio.h>
#include <stdlib.h>

int main(){

	char l[] ={"Daniel"} ;
	char *p = l;

	int tam=0;

	while(*p != '\0'){
		tam++;
		p++;
	}


	p = l;
	
	for(int i = 0 ; i < tam ; i++){
		printf("%c" , p[i]);
	}

	return 0;

}
