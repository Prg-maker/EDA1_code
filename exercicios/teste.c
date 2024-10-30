#include <stdio.h>
#include <stdlib.h>

int verificaBissexto(int *ano) {
    // Verifica se o ano é bissexto
    if ((*ano % 400 == 0) || ((*ano % 4 == 0) && (*ano % 100 != 0))) 
        return 1;
    return 0;
}

void calculaDiaMes(int *dia, int *mes, int *ano) {
    *mes = 1;

    // Verifica se o dia está fora do intervalo válido
    if (*dia < 1 || (*dia > 366 && verificaBissexto(ano))) {
        printf("Entradas invalidas!\n");
        return;
    } else if (*dia > 365) {
        printf("Entradas invalidas!\n");
        return;
    }

    // Armazena se o ano é bissexto
    int res = verificaBissexto(ano);
    
    // Array com o número de dias em cada mês
    int diasPorMes[] = {0, 31, (res ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 31};

    // Calcula o mês e o dia
    while (*dia > diasPorMes[*mes]) {
        *dia -= diasPorMes[*mes];
        (*mes)++;
    }

    // Imprime o resultado no formato desejado
    printf("%02d/%02d/%04d\n", *dia, *mes, *ano);
}

int main() {
    int dia, mes = 1, ano;

    // Leitura dos dados de entrada
    scanf("%d %d", &dia, &ano);

    // Chamada da função para calcular o dia e mês
    calculaDiaMes(&dia, &mes, &ano);

    return 0;
}
