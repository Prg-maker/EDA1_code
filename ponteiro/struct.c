#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int dia ,mes,ano;
}Data;


void imprimirData(Data *x){
	printf("%d/%d/%d" , x-> ano , x-> mes , x-> dia);
}

int main(){
	Data data;
	Data *p;

	p = &data;

	data.dia = 20;
	data.mes = 1;
	data.ano = 2024;
	imprimirData(&data);
	return 0;
}
