#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    double temperatura;
    double maiorTemp = INT_MIN;
    double menorTemp = INT_MAX;
    int primeiraValida = 1;  // Flag para marcar a primeira temperatura válida
    
    printf("==== Controle de Temperatura ====\n");
    printf("Digite as temperaturas registradas (digite 0 para encerrar):\n\n");
    
    // Loop principal - continua até o usuário digitar 0
    while (1) {
        printf("Digite a temperatura: ");
        scanf("%lf", &temperatura);
        
        // Verifica se é 0 para sair
        if (temperatura == 0) {
            break;
        }
        
        // Valida se a temperatura está no intervalo válido (-50 a 60)
        if (temperatura < -50 || temperatura > 60) {
            printf("Temperatura inválida\n");
            continue;
        }
        
        // Se for a primeira temperatura válida, inicializa max e min
        if (primeiraValida) {
            maiorTemp = temperatura;
            menorTemp = temperatura;
            primeiraValida = 0;
        } else {
            // Atualiza a maior temperatura
            if (temperatura > maiorTemp) {
                maiorTemp = temperatura;
            }
            // Atualiza a menor temperatura
            if (temperatura < menorTemp) {
                menorTemp = temperatura;
            }
        }
    }
    
    // Exibe os resultados
    printf("\n==== Resultados ====\n");
    
    // Verifica se alguma temperatura válida foi registrada
    if (primeiraValida) {
        printf("Nenhuma temperatura válida foi registrada.\n");
    } else {
        printf("Maior temperatura: %.0f\n", maiorTemp);
        printf("Menor temperatura: %.0f\n", menorTemp);
    }
    
    return 0;
}