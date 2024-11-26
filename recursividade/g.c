#include <stdio.h>
#include <string.h>

void inverterString(char *str, int inicio , int fim ) {
  
		
    //while (inicio < fim) {
      //  char temp = str[inicio];
        //str[inicio] = str[fim];
        //str[fim] = temp;
        //inicio++;
        //fim--;
    //}
		if(inicio >= fim){
			return ;
		}

		printf("%d %d %s\n" , fim , inicio, str);
		char temp = str[inicio];
		str[inicio] = str[fim];
		str[fim] = temp;

		return inverterString(str , inicio+1 , fim -1);
}
// fim = 6-1 = 5
// inicio 0 Daniel 
// 4 1 e a Denial 
// 3 2 i n	Deinal
// 3 3 n i	leinaD
// 2 4 
// Daniel
// leinaD
// D l
//

int main() {
    char str[] = "recursao";
		int inicio = 0  , fim = strlen(str)-1 ; 
    inverterString(str, inicio , fim);
    printf("String invertida: %s\n", str);
    return 0;
}

