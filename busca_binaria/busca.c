#include <stdio.h>
#include <stdlib.h>

// Função de busca sequencial
void busca_sequencial(const int vet[], int tam, int x) {
    int i = 0;
    while (i != tam && vet[i] != x) i++;
    
    if (i != tam) {
        printf("Encontrou, o número %d está na posição: %d\n", x, i);
    } else {
        printf("Não encontrou\n");
    }
}

// Função de busca binária com impressão de subvetores
int busca_binaria(const int vet[], int l, int r, int x) {
    if (l > r) {
        return -1; // Não encontrado
    }

    int m =  (l+r  ) / 2;

    if (vet[m] == x) {
        return m; // Elemento encontrado
    }

    if (x < vet[m]) {
        // Imprime o subvetor da busca na metade esquerda
    
        return busca_binaria(vet, l, m - 1, x);
    } else {
        // Imprime o subvetor da busca na metade direita
      
        return busca_binaria(vet, m + 1, r, x);
    }
}

int main() {
    int vet[] = {1, 2, 41, 2, 5}; // Vetor não ordenado
    int vet_ordenado[] = {1, 4, 5, 6, 7, 8 , 9, 10 , 22 , 35 , 46 , 67 ,78, 89}; // Vetor ordenado
    int tam = 13;

    // Busca sequencial
    busca_sequencial(vet, tam, 41);

    // Busca binária
    int res = busca_binaria(vet_ordenado, 0, tam - 1, 1);

    if (res != -1) {
        printf("Encontrou o número %d na posição: %d\n", vet_ordenado[res], res);
    } else {
        printf("Não encontrou\n");
    }

    return 0;
}
