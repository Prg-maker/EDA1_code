#include <stdio.h>

int encontrarMaior(const int vetor[], int t, int maior , int index) {
    //int maior = vetor[0];
    //for (int i = 1; i < tamanho; i++) {
      //  if (vetor[i] > maior) {
        //    maior = vetor[i];
        //}
    //}
    //return maior;
		
	if(index > t){
		return maior;
	}
	if(maior < vetor[index]) maior = vetor[index];

	return encontrarMaior(vetor , t , maior , index + 1);
	
}

int main() {
    int vetor[] = {1, 7, 3, 10, 2, 8 , 100};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
		int i = 1 ;
    printf("Maior elemento: %d\n", encontrarMaior(vetor, tamanho , vetor[0] , i));
    return 0;
}

