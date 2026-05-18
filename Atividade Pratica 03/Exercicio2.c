#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    double numero1, numero2, resultado;
    
    // Loop principal - continua até o usuário escolher 0
    while (1) {
        // Exibe o menu de opções
        printf("\n==== Menu de Opções ====\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        
        if (opcao == 0) {
            printf("Fim.\n");
            break;
        }
        
        
        if (opcao < 1 || opcao > 4) {
            printf("Opção inválida\n");
            continue;
        }
        

        printf("Digite o primeiro número: ");
        scanf("%lf", &numero1);
        
        printf("Digite o segundo número: ");
        scanf("%lf", &numero2);
        
       
        switch (opcao) {
            case 1:  // Adição
                resultado = numero1 + numero2;
                printf("Resultado: %.10g + %.10g = %.10g\n", numero1, numero2, resultado);
                break;
                
            case 2:  // Subtração
                resultado = numero1 - numero2;
                printf("Resultado: %.10g - %.10g = %.10g\n", numero1, numero2, resultado);
                break;
                
            case 3:  // Multiplicação
                resultado = numero1 * numero2;
                printf("Resultado: %.10g * %.10g = %.10g\n", numero1, numero2, resultado);
                break;
                
            case 4:  // Divisão
                // Verifica divisão por zero
                if (numero2 == 0) {
                    printf("Divisão por zero não permitida\n");
                } else {
                    resultado = numero1 / numero2;
                    printf("Resultado: %.10g / %.10g = %.10g\n", numero1, numero2, resultado);
                }
                break;
        }
    }
    
    return 0;
}