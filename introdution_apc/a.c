
//#include <cstdio>
//#include <cstring>
#include <stdio.h>
int main (){

	int a,b,s=0;
	
	for (int i = 0 ; i < 3 ; i++){
		scanf(" %d" , &a);
		s+=a;
	}
	
	scanf("%d" , &b);


	if(b!=s)printf("Errou\n");
	else printf("Acertou\n");
	
	return 0;
}
