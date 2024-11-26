#include <stdio.h>

int soma(int n) {
    //int resultado = 0;
    //for (int i = 1; i <= n; i++) {
    //    resultado += i;
    //}
    //return resultado;
		//
		if(n == 0) return 0;

		return n + soma(n-1);
}

int main() {
    int n = 10;
    printf("Soma dos primeiros %d números: %d\n", n, soma(n));
    return 0;
}

