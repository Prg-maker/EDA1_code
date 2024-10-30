#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i =0 , r=0;
	scanf(" %d" , &n);

	while(i<n){
		int l,c;
		scanf(" %d  %d" , &l, &c);
		if(l>c)r+=c;
		i++;
	}
	printf("%d\n", r);
}
