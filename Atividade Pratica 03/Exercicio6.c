#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    double saldo = 0.0;
    double valor;
    
    printf("==== Sistema Bancário ====\n\n");
    
    // Loop principal - continua até o usuário escolher 0
    while (1) {
        // Exibe o menu de opções
        printf("\n==== Menu de Opções ====\n");
        printf("1. Consultar Saldo\n");
        printf("2. Realizar Depósito\n");
        printf("3. Realizar Saque\n");
        printf("0. Sair\n");
        printf("========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        // Verifica se a opção é 0 para sair
        if (opcao == 0) {
            printf("Encerrando o sistema bancário.\n");
            break;
        }
        
        // Processa cada opção
        switch (opcao) {
            case 1:  // Consultar Saldo
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
                
            case 2:  // Realizar Depósito
                printf("Digite o valor para depósito: ");
                scanf("%lf", &valor);
                
                // Valida se o valor é negativo
                if (valor < 0) {
                    printf("Valor inválido\n");
                } else {
                    saldo += valor;
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;
                
            case 3:  // Realizar Saque
                printf("Digite o valor para saque: ");
                scanf("%lf", &valor);
                
                // Valida se o valor é negativo
                if (valor < 0) {
                    printf("Valor inválido\n");
                } 
                // Verifica se há saldo suficiente
                else if (valor > saldo) {
                    printf("Saldo insuficiente\n");
                } else {
                    saldo -= valor;
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;
                
            default:  // Opção inválida
                printf("Opção inválida\n");
                break;
        }
    }
    
    return 0;
}