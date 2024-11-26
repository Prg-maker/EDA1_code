#include <stdio.h>

int potencia(int base, int expoente) {
   // int resultado = 1;
    //for (int i = 0; i < expoente; i++) {
    //    resultado *= base;
    //}
    //return resultado;
		if(expoente == 0) return 1;


		return base * potencia(base , expoente - 1);
}

int main() {
    int base = 10, expoente = 3;
    printf("%d elevado a %d é: %d\n", base, expoente, potencia(base, expoente));
    return 0;
}

