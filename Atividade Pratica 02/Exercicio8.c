#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    float n1, n2, resultado;
    char operacao[20];

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%s", operacao);

    // Soma
    if (strcmp(operacao, "1") == 0 || strcmp(operacao, "Soma") == 0) {

        resultado = n1 + n2;
        printf("%.1f + %.1f = %.1f", n1, n2, resultado);
    }

    // Subtração
    else if (strcmp(operacao, "2") == 0 || strcmp(operacao, "Subtracao") == 0) {

        resultado = n1 - n2;
        printf("%.1f - %.1f = %.1f", n1, n2, resultado);
    }

    // Multiplicação
    else if (strcmp(operacao, "3") == 0 || strcmp(operacao, "Multiplicacao") == 0) {

        resultado = n1 * n2;
        printf("%.1f * %.1f = %.1f", n1, n2, resultado);
    }

    // Divisão
    else if (strcmp(operacao, "4") == 0 || strcmp(operacao, "Divisao") == 0) {

        resultado = n1 / n2;
        printf("%.1f / %.1f = %.1f", n1, n2, resultado);
    }

    // Resto
    else if (strcmp(operacao, "5") == 0 || strcmp(operacao, "Resto") == 0) {

        resultado = (int)n1 % (int)n2;
        printf("%.1f mod %.1f = %.1f", n1, n2, resultado);
    }

    // Potência
    else if (strcmp(operacao, "6") == 0 || strcmp(operacao, "Potencia") == 0) {

        resultado = pow(n1, n2);
        printf("%.1f ^ %.1f = %.1f", n1, n2, resultado);
    }

    else {
        printf("Operacao nao suportada");
    }

    return 0;
}