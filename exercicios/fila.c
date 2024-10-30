#include <stdio.h>
#include <stdlib.h>

int main(){

	int x;
	scanf(" %d" , &x);
	int xs[x];
	int i = 0;
	while(i < x) scanf(" %d" ,&xs[i++] );
	int a;
	scanf(" %d", &a);
	i = 0;
	int vet[a];
	while(i < a )scanf(" %d" , &vet[i++]);

	

	for( i = 0 ; i < x ; i++ ){
		for(int j = 0 ; j < a ; j++){
			if(xs[i] == vet[j]){
				xs[i]=0;
				//printf("%d \n" , xs[i]);
				break;
			}
		}
	}
	
	for(int j = 0 ; j < x ; j++)
		if(xs[j] != 0 )printf("%d ", xs[j]);
	
	printf("\n");
}
