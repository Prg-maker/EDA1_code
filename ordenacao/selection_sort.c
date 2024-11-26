#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define Key(A)
#define less(A, B) ((A) < (B))
//#define less(A, B)(Key(A) < Key(B))
#define exch(A,B){Item T = A; A=B ; B=T;}
#define cmexch(A,B) , {if(less(B,A) exch(A,B));} 


void selection_sort(Item * vet, int l , int r){
	if( l == r ) {
		
		return;
	}
	int min = l;
	
	for(int j = l+1; j<= r; j++){
		if(less(vet[j] , vet[min]))
				min = j;
	}

	exch( vet[l],vet[min]);
	selection_sort(vet, l+1 , r);
}
int main(){
	Item v[] = {30 , 45 , 60, 10 , 5, 92};
	selection_sort(v ,0 , 5);

	for(int i = 0 ; i < 6 ; i++)printf("%d " , v[i]);
}
