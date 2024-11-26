#include <stdio.h>
#include <string.h>

int ehPalindromo(const char *str , int fim , int inicio) {
    

    //while (inicio < fim) {
     //   if (str[inicio] != str[fim]) {
    //        return 0; // Não é palíndromo
     //   }
      //  inicio++;
       // fim--;
    //}
    //return 1; // É palíndromo
		//	
		//
		if(){
			return 0;
		}

		
		
		return ehPalindromo(str[]);

}

// Daniel 
// leinaD

int main() {
    const char* palavra = "radar";

    if (ehPalindromo(palavra)) {
        printf("'%s' é um palíndromo.\n", palavra);
    } else {
        printf("'%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}

