#include <stdio.h>
#include <stdlib.h>
typedef int Item;

//#define Key(A)
//#define less(A, B) ((A) < (B))
//#define less(A, B)(Key(A) < Key(B))
//#define exch(A,B){Item T = A; A=B ; B=T;}
//#define cmexch(A,B) , {if(less(B,A) exch(A,B));} 

typedef int Item;
#define Key(A)
#define less(A, B) ((A) < (B))
//#define less(A, B)(Key(A) < Key(B))
#define exch(A,B){Item T = A; A=B ; B=T;}
#define cmexch(A,B) ,{if(less(B,A) exch(A,B));} 

void bubblesort(Item *v , int l , int r){
	for(int i = l ; i < r ; i++){
		for(int j = l ; j < r ; j++)
			if(less(v[j+1] , v[j])){
				exch(v[j+1] ,v[j] );
			}
	}
}


int main(){
	Item vector_ordenado[] = {1 , 2 , 3 , 4 , 5};
	Item vector[] = {2,  1, 2 , 3 ,5  ,6  ,1  ,2};
	
	bubblesort(vector , 0 , 7);
	for(int i = 0 ; i< 8 ; i++){
		printf("%d " , vector[i]);
	}

}
