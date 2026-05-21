#include <stdio.h>
#include <string.h>

#define MAX_ERROS 7

int main() {
    char palavra[50];
    char estado[50];
    char chute;
    int erros = 0;

    printf("Digite a palavra secreta: ");
    scanf("%s", palavra);

    for (int i = 0; i < 30; i++)
        printf("\n");

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++)
        estado[i] = '_';
    estado[tamanho] = '\0';

    while (1) {
        printf("Digite uma letra: ");
        scanf(" %c", &chute);

        int acertou = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == chute) {
                estado[i] = chute;
                acertou = 1;
            }
        }

        if (!acertou)
            erros++;

        printf("Estado: ");
        for (int i = 0; i < tamanho; i++) {
            if (i < tamanho - 1)
                printf("%c ", estado[i]);
            else
                printf("%c\n", estado[i]);
        }
        printf("Erros: %d\n\n", erros);

        int descoberta = 1;
        for (int i = 0; i < tamanho; i++) {
            if (estado[i] == '_') {
                descoberta = 0;
                break;
            }
        }

        if (descoberta) {
            printf("Parabens! Voce descobriu a palavra.\n");
            return 0;
        }

        if (erros >= MAX_ERROS) {
            printf("Voce perdeu! A palavra era: %s\n", palavra);
            return 0;
        }
    }

    return 0;
}