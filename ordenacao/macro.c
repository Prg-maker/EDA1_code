#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define Key(A)
#define less(A, B)(Key(A)  , Key(B))
#define exch(A,B){Item t = A, A=B , B=t}
#define cmexch(A,B) , {if(less(B,A) exch(A,B));} 
int main(){}
