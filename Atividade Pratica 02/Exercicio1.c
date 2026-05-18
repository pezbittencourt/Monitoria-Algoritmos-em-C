#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main () {

float ganhos, gastos;

printf("Qual a renda total da casa?");
scanf("%f", &ganhos);

printf("Gasto total:");
scanf("%f", &gastos);

if (ganhos >= gastos) 
    printf("Voce esta dentro do orcamento");

    else 
    printf("Voce esta fora do orcamento");

    return 0;
}