#include <stdio.h>

int main() {

    float n1, n2, n3, media;
    int faltas;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%d", &faltas);

    // Validação
    if ((n1 < 0 || n1 > 10) ||
        (n2 < 0 || n2 > 10) ||
        (n3 < 0 || n3 > 10) ||
        (faltas < 0)) {

        printf("Parametros invalidos");
    }
    else {

        media = (n1 + n2 + n3) / 3;

        printf("Media: %.1f\n", media);

        if (faltas > 4) {
            printf("Situacao: Reprovado por Falta");
        }
        else if (media == 0) {
            printf("Situacao: Desistente");
        }
        else if (media >= 8 && media <= 10) {
            printf("Situacao: Aprovado com sucesso");
        }
        else if (media >= 6) {
            printf("Situacao: Aprovado");
        }
        else {
            printf("Situacao: Recuperacao");
        }
    }

    return 0;
}