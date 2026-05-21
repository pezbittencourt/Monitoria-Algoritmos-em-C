#include <stdio.h>

int main() {
    int n;

    printf("Quantidade de dias monitorados: ");
    scanf("%d", &n);

    float peso[n];
    int diaMaior = 0, diaMenor = 0;

    for (int i = 0; i < n; i++) {
        printf("Peso do dia %d (kg): ", i + 1);
        scanf("%f", &peso[i]);
        if (peso[i] > peso[diaMaior]) diaMaior = i;
        if (peso[i] < peso[diaMenor]) diaMenor = i;
    }

    printf("\nPesos informados: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", peso[i]);
        else
            printf("%.0f\n", peso[i]);
    }

    printf("Maior peso: %.0f kg (Dia %d)\n", peso[diaMaior], diaMaior + 1);
    printf("Menor peso: %.0f kg (Dia %d)\n", peso[diaMenor], diaMenor + 1);

    printf("\nGrafico de evolucao:\n");
    for (int i = 0; i < n; i++) {
        int barras = (int)peso[i] / 5;
        printf("Dia %d | ", i + 1);
        for (int j = 0; j < barras; j++)
            printf("\u2588");
        printf(" %.0f\n", peso[i]);
    }

    return 0;
}