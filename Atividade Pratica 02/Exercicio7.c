#include <stdio.h>

int main() {

    float notaCandidato, notaCorte, notaMinima;

    scanf("%f", &notaCandidato);
    scanf("%f", &notaCorte);
    scanf("%f", &notaMinima);

    printf("Situacao candidato:\n");

    if (notaCandidato < notaCorte) {
        printf("Reprovado");
    }
    else if (notaCandidato >= notaMinima) {
        printf("Aprovado");
    }
    else {
        printf("Lista de Espera");
    }

    return 0;
}