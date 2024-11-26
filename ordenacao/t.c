#include <stdio.h>

#define less(A, B) ((A) < (B)) // Macro para comparar dois elementos
#define exch(A, B) { int t = A; A = B; B = t; } // Macro para trocar dois elementos

void selection_sort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i; // Índice do menor elemento
        for (int j = i + 1; j < n; j++) {
            if (less(v[j], v[min])) { // Compara os elementos
                min = j;
            }
        }
        exch(v[i], v[min]); // Troca os elementos
    }
}

void print_array(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v[] = {5, 3, 6, 2, 1, 4};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Antes da ordenação:\n");
    print_array(v, n);

    selection_sort(v, n);

    printf("Depois da ordenação:\n");
    print_array(v, n);

    return 0;
}

