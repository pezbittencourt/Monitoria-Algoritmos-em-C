#include <stdio.h>

int main() {

    int pista;
    int voltas;
    int tempoVolta;

    scanf("%d", &pista);
    scanf("%d", &voltas);
    scanf("%d", &tempoVolta);

    float distanciaTotal =
        (pista * voltas) / 1000.0;

    float previsaoTempo =
        (tempoVolta * voltas) / 60.0;

    printf("Análise Preditiva Concluída\n");
    printf("--Distância total a ser percorrida: %.2f km.\n",
           distanciaTotal);

    printf("Previsão de conclusão: %.1f minutos.",
           previsaoTempo);

    return 0;
}