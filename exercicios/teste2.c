#include <stdio.h>
#include <stdlib.h>

int verificaBissexto(int *ano) {
    // Verifica se o ano é bissexto
    return ((*ano % 400 == 0) || (*ano % 4 == 0 && *ano % 100 != 0)) ? 1 : 0;
}

void calculaDiaMes(int *dia, int *mes, int *ano) {
    // Inicializa o mês
    *mes = 1;

    // Verifica se o dia está fora do intervalo
    if (*dia < 1 || *dia > 366) {
        printf("Entradas invalidas!\n");
        return;
    }

    // Verifica se o dia está fora do intervalo para anos não bissextos
    if (*dia > 365 && !verificaBissexto(ano)) {
        printf("Entradas invalidas!\n");
        return;
    }

    // Obtemos a verificação se o ano é bissexto
    int res = verificaBissexto(ano);
    
    // Array que contém os dias em cada mês
    int d[] = {0, 31, (res ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 31};
    
    // Calcula o mês e ajusta o dia
    while (*dia > d[*mes]) {
        *dia -= d[*mes];
        (*mes)++;
    }

    // Exibe a data formatada
    printf("%02d/%02d/%04d\n", *dia, *mes, *ano);
}

int main() {
    int dia, mes = 1, ano;

    printf("Digite o dia e o ano: ");
    scanf("%d %d", &dia, &ano);

    calculaDiaMes(&dia, &mes, &ano);

    return 0;
}

