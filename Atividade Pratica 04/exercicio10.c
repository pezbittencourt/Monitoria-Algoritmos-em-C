#include <stdio.h>

int contemValor(int vetor[], int tam, int val) {
    for (int i = 0; i < tam; i++)
        if (vetor[i] == val) return 1;
    return 0;
}

int main() {
    int nA, nB;
    int a[100], b[100];

    printf("Quantidade de figurinhas do jogador A: ");
    scanf("%d", &nA);
    for (int i = 0; i < nA; i++) {
        printf("Figurinha %d do jogador A: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nQuantidade de figurinhas do jogador B: ");
    scanf("%d", &nB);
    for (int i = 0; i < nB; i++) {
        printf("Figurinha %d do jogador B: ", i + 1);
        scanf("%d", &b[i]);
    }

    int comuns[100],   totalComuns  = 0;
    int apenasA[100],  totalA       = 0;
    int apenasB[100],  totalB       = 0;

    for (int i = 0; i < nA; i++) {
        if (contemValor(b, nB, a[i]))
            comuns[totalComuns++] = a[i];
        else
            apenasA[totalA++] = a[i];
    }

    for (int i = 0; i < nB; i++) {
        if (!contemValor(a, nA, b[i]))
            apenasB[totalB++] = b[i];
    }

    int trocas = totalA < totalB ? totalA : totalB;

    printf("\nFigurinhas em comum: ");
    if (totalComuns == 0) {
        printf("nenhuma\n");
    } else {
        for (int i = 0; i < totalComuns; i++)
            printf(i < totalComuns - 1 ? "%d, " : "%d\n", comuns[i]);
    }

    printf("Apenas jogador A: ");
    if (totalA == 0) {
        printf("nenhuma\n");
    } else {
        for (int i = 0; i < totalA; i++)
            printf(i < totalA - 1 ? "%d, " : "%d\n", apenasA[i]);
    }

    printf("Apenas jogador B: ");
    if (totalB == 0) {
        printf("nenhuma\n");
    } else {
        for (int i = 0; i < totalB; i++)
            printf(i < totalB - 1 ? "%d, " : "%d\n", apenasB[i]);
    }

    printf("Quantidade de trocas possiveis: %d\n", trocas);

    return 0;
}