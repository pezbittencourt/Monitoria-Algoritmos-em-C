#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("quantos meses de faturamento voce vai precisar analisar?");
    int n;
    scanf("%d", &n);

    float fat[n];

    for (int i = 0; i < n; i++) {
        printf("Faturamento do mes %d: ", i+1);
        scanf("%f", &fat[i]);
    }

    printf("\nAnalise de Faturamento\n");

    printf("Faturamento informado: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", fat[i]);
        else
            printf("%.0f\n", fat[i]);
    }

    int crescimento = 1, queda = 1, constante = 1;

    for (int i = 1; i < n; i++) {
        if (fat[i] < fat[i - 1])  crescimento = 0;
        if (fat[i] > fat[i - 1])  queda = 0;
        if (fat[i] != fat[i - 1]) constante = 0;
    }

    if (constante)
        printf("Situacao: Constante\n");
    else if (crescimento)
        printf("Situacao: Crescimento\n");
    else if (queda)
        printf("Situacao: Queda\n");
    else
        printf("Situacao: Sem padrao\n");

    return 0;
}