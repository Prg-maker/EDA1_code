#include <stdio.h>

int main(){
	char nomes[100][100] = {
		"Jose Silva " ,
    "Maria Silva " ,
    "Antonio dos Santos " ,
    "Pedro dos Santos " ,
    "Joao da Silva " };
	


for(int i = 0 ; i < 5 ; i++){
	printf("Nome: %s \n", nomes[i]);
}

	
}
