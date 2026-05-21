#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    printf("quantas notas voce quer avaliar?");
    scanf("%d", &n);

    float notas[n];
    float soma = 0;
    float maior, menor;
    int aprovados = 0, reprovados = 0;


    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

   
    maior = notas[0];
    menor = notas[0];

    // Cálculo de maior, menor, aprovados e reprovados
    for (int i = 0; i < n; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] >= 6)    aprovados++;
        else                  reprovados++;
    }

    float media = soma / n;

    printf("\nResultado da Turma \n");

    printf("Notas informadas: ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%.0f, ", notas[i]);
        else
            printf("%.0f\n", notas[i]);
    }

    printf("\n Média da turma: %.0f\n", media);
    printf(" Maior nota: %.0f\n", maior);
    printf(" Menor nota: %.0f\n", menor);
    printf(" Aprovados: %d\n", aprovados);
    printf(" Reprovados: %d\n", reprovados);

    if (reprovados == 0)
        printf("\nSituação geral: Todos os alunos foram aprovados\n");
    else
        printf("\nSituação geral: Nem todos os alunos foram aprovados\n");

    return 0;
}