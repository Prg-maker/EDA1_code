#include <stdio.h>

int main(){
	int n ;
	scanf(" %d", &n);

	int vet [n+1];
	int i = 1;

	while(i < n+1){
		scanf(" %d"	, &vet[i++]);
	}
	
	
	int b ;
	scanf(" %d" , &b);
	
	vet[0] = b;
	i = 1;

	while(i < n+1 && vet[i]!= b )i++;
	
	printf("%d" , i);

	if(b == vet[i]){
		printf("Achou");
	}else{
		printf("Nao Achou");
	}

	return 0;
}
