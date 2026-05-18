#include <stdio.h>
#include <stdlib.h>

int main() {
    double valor;
    double totalCompra = 0;
    int parcelas;
    double valorParcela;
    
    printf("==== Caixa Mercado ====\n");
    printf("Digite os valores das compras (digite 0 para encerrar):\n\n");
    
    // Loop principal - coleta os valores das compras até digitar 0
    while (1) {
        printf("Digite o valor: ");
        scanf("%lf", &valor);
        
        // Verifica se é 0 para sair
        if (valor == 0) {
            break;
        }
        
        // Valida se o valor é negativo
        if (valor < 0) {
            printf("Valor inválido: %.2f\n", valor);
            continue;
        }
        
        // Adiciona o valor ao total
        totalCompra += valor;
    }
    
    printf("\n==== Formas de Pagamento ====\n");
    printf("Digite a quantidade de parcelas (0 ou 1 para à vista, maior que 1 para parcelado): ");
    scanf("%d", &parcelas);
    
    printf("\n==== Resultado ====\n");
    
    // Verifica a forma de pagamento
    if (parcelas == 0 || parcelas == 1) {
        printf("Pagamento à vista: R$ %.2f\n", totalCompra);
    } else if (parcelas > 1) {
        valorParcela = totalCompra / parcelas;
        printf("Total da compra: R$ %.2f\n", totalCompra);
        printf("Parcelado em %dx de R$ %.2f\n", parcelas, valorParcela);
    } else {
        printf("Número de parcelas inválido.\n");
    }
    
    return 0;
}