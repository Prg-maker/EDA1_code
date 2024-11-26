#include <stdio.h>

int somaVetor(const int vetor[], int tamanho, int soma, int size) {
    //int soma = 0;
    //for (int i = 0; i < tamanho; i++) {
     //   soma += vetor[i];
    //}
    //return soma;
		//

	if(size > tamanho) return soma;
	soma = soma + vetor[size];
	return  somaVetor(vetor , tamanho , soma , size+1);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]) , soma = 0 , size = 0;
    printf("Soma dos elementos: %d\n", somaVetor(vetor, tamanho , soma , size));
    return 0;
}

