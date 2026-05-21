#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char projeto[100];
    int n;
    float meta;

    printf("Nome do projeto: ");
     fgets(projeto, 100, stdin);
    projeto[strcspn(projeto, "\n")] = '\0';


    printf("Quantidade de doacoes recebidas: ");
    scanf("%d", &n);

    printf("Meta financeira: ");
    scanf("%f", &meta);

    float doacoes[n];
    float total = 0;
    float maior = 0;

    for (int i = 0; i < n; i++) {
        printf("Valor da doacao %d: ", i + 1);
        scanf("%f", &doacoes[i]);
        total += doacoes[i];
        if (doacoes[i] > maior)
            maior = doacoes[i];
    }

    printf("\n Resumo das Doacoes \n");
    printf("Projeto: %s\n", projeto);

    printf("Doacoes recebidas: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", doacoes[i]);
        else
            printf("%.0f\n", doacoes[i]);
    }

    printf("Total arrecadado: %.0f\n", total);
    printf("Maior doacao: %.0f\n", maior);

    if (total >= meta)
        printf("Situacao: Meta atingida\n");
    else
        printf("Situacao: Meta nao atingida\n");

    return 0;
}