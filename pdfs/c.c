#include <stdio.h>

//#define tam 101

int main(){
	long long tam = 100;
	long long xs[tam+1];


	
	long long b = 10;
	xs[tam+1] = b;
	
	for(int i = 0 ; i < tam ; i++){
		xs[i] = i;
	}
	//printf(" %d" , xs[tam]);


	long long i = 0;
	while(xs[i] != b){
		i++;
	}

	if(i == tam+1){
		printf("nao achou");
	}else{
		printf("achou");
	}

	return 0;

}
