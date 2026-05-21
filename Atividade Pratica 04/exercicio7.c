#include <stdio.h>

#define MAX_OPERACOES 1000

int main() {
    int trans[MAX_OPERACOES];
    int top = 0;
    int valor;

    printf("Digite as transacoes (0 cancela a ultima, -1 encerra):\n");

    while (1) {
        printf("Transacao: ");
        scanf("%d", &valor);

        if (valor == -1) break;

        if (valor == 0) {
            if (top > 0)
                top--;
        } else {
            trans[top++] = valor;
        }
    }

    int saldo = 0;
    for (int i = 0; i < top; i++)
        saldo += trans[i];

    printf("\nSaldo final: %d\n", saldo);

    return 0;
}