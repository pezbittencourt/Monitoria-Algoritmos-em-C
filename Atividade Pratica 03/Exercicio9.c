#include <stdio.h>

int main() {
    int base, altura;

    scanf("%d", &base);
    scanf("%d", &altura);

    // Verifica se é válido (ambos > 0)
    if (base <= 0 || altura <= 0) {
        printf("Retângulo inválido\n");
        return 0;
    }

    // Desenha o retângulo
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < base; j++) {
            printf("* ");
        }
        printf("\n"); // pula linha após cada linha do retângulo
    }

    return 0;
}