#include <stdio.h>

int main() {
    int n;

    printf("Quantidade de medicamentos: ");
    scanf("%d", &n);

    float a[n], b[n];
    float totalA = 0, totalB = 0;
    int baratoA = 0, baratoB = 0, igual = 0;

    printf("\n Precos Farmacia A \n");
    for (int i = 0; i < n; i++) {
        printf("Preco do medicamento %d: ", i + 1);
        scanf("%f", &a[i]);
        totalA += a[i];
    }

    printf("\n Precos Farmacia B \n");
    for (int i = 0; i < n; i++) {
        printf("Preco do medicamento %d: ", i + 1);
        scanf("%f", &b[i]);
        totalB += b[i];
    }

    printf("\nFARMAZOOM\n");

    printf("Farmacia A: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", a[i]);
        else
            printf("%.0f\n", a[i]);
    }

    printf("Farmacia B: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", b[i]);
        else
            printf("%.0f\n", b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i])      baratoA++;
        else if (b[i] < a[i]) baratoB++;
        else                  igual++;
    }

    printf("\nProdutos mais Baratos\n");
    printf("Na Farmacia A: %d\n", baratoA);
    printf("Na Farmacia B: %d\n", baratoB);
    printf("Mesmo preco: %d\n", igual);

    printf("\nTotal\n");
    printf("Farmacia A: R$ %.0f\n", totalA);
    printf("Farmacia B: R$ %.0f\n", totalB);

    printf("\nMelhor opcao\n");
    if (totalA < totalB)
        printf("Farmacia A\n");
    else if (totalB < totalA)
        printf("Farmacia B\n");
    else
        printf("Empate\n");

    return 0;
}