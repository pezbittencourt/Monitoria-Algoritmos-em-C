#include <stdio.h>
#include <string.h>

int main() {

    char curso[10];
    char isento[10];

    float desconto, mensalidade;

    scanf("%s", curso);
    scanf("%s", isento);
    scanf("%f", &desconto);

    // Definindo valor do curso
    if (strcmp(curso, "SI") == 0) {
        mensalidade = 900.0;
    }

    else if (strcmp(curso, "ADS") == 0) {
        mensalidade = 750.0;
    }

    else if (strcmp(curso, "CS") == 0) {
        mensalidade = 1150.0;
    }

    else if (strcmp(curso, "EC") == 0) {
        mensalidade = 1300.0;
    }

    else if (strcmp(curso, "ES") == 0) {
        mensalidade = 950.0;
    }

    else {
        printf("Curso nao encontrado");
        return 0;
    }

    // Verifica isenção
    if (strcmp(isento, "Sim") == 0) {
        mensalidade = 0;
    }

    else {

        // Aplicando desconto
        mensalidade = mensalidade - (mensalidade * (desconto / 100));
    }

    printf("Valor da mensalidade:\n");
    printf("R$ %.2f", mensalidade);

    return 0;
}