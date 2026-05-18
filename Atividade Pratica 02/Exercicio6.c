#include <stdio.h>
#include <string.h>

int main() {

    char cor1[20], cor2[20];

    scanf("%s", cor1);
    scanf("%s", cor2);

    // Verifica se as cores são primárias
    if (
        (strcmp(cor1, "Vermelho") != 0 &&
         strcmp(cor1, "Azul") != 0 &&
         strcmp(cor1, "Amarelo") != 0)

        ||

        (strcmp(cor2, "Vermelho") != 0 &&
         strcmp(cor2, "Azul") != 0 &&
         strcmp(cor2, "Amarelo") != 0)
    ) {

        printf("Apenas cores primarias sao aceitas.");
    }

    else {

        printf("A combinacao resulta em:\n");

        if (
            (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Azul") == 0) ||
            (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Vermelho") == 0)
        ) {
            printf("Roxo");
        }

        else if (
            (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Amarelo") == 0) ||
            (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Vermelho") == 0)
        ) {
            printf("Laranja");
        }

        else if (
            (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Amarelo") == 0) ||
            (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Azul") == 0)
        ) {
            printf("Verde");
        }

        else {
            printf("Mesma cor informada");
        }
    }

    return 0;
}