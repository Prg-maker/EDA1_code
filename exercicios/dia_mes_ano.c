#include <stdio.h>
#include <stdlib.h>

int verificaBissexto(int *ano){

	
	if((*ano % 400 == 0 )||( *ano % 4 ==0  ) && (*ano % 100 != 0))return 1;
	
	return 0;
}

void calculaDiaMes(int *dia, int *mes, int *ano){
	*mes = 1;
	
	if(*dia> 366){
		 printf("Entradas invalidas!\n");
        return;
	}

	if (*dia > 365 && !verificaBissexto(ano)) {
        printf("Entradas invalidas!\n");
        return;
    }
	if(*ano == 0 ){
		  printf("Entradas invalidas!\n");
        return;
	}
	int res = verificaBissexto(ano);

	
	
	//int ad[] = {0, 31, (res ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 31};
	  int d[]={0, 31, (res ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 31};
	while(*dia > d[*mes]){
		*dia -=  d[*mes];
		(*mes)++;
	}

	//printf("%02d/%02d/%04d\n" , *dia , *mes,*ano);
	printf("%02d/%02d/%04d\n", *dia, *mes, *ano);
}



int main(){
	int dia,mes, ano ;
	
	
	scanf(" %d %d" , &dia ,&ano );
	
	calculaDiaMes(&dia , &mes, &ano);
	

	
}
