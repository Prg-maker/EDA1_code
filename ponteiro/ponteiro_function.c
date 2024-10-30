#include <stdio.h>
#include <stdlib.h>

void i( int *num){
	printf(" %d" , *num);
	*num = 30;
}
int main(){
	int a = 10 ;

	i(&a);

	printf(" %d" , a);

}
