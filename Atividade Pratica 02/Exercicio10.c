#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int qtd_inteiras, qtd_meias;
    char dia_semana[20];
    char nacional[4];
    double total_a_pagar;
    
    // Constants
    double PRECO_CHEIO = 28.50;
    double PRECO_MEIA_PADRAO = 14.25; // Half of 28.50
    double PRECO_QUARTA = 14.50;
    double PRECO_NACIONAL = 5.00;
    
    // Reading inputs
    scanf("%d", &qtd_inteiras);
    scanf("%d", &qtd_meias);
    scanf("%s", dia_semana);
    scanf("%s", nacional);
    
    // Convert to lowercase for comparison
    for(int i = 0; dia_semana[i]; i++) {
        dia_semana[i] = tolower(dia_semana[i]);
    }
    for(int i = 0; nacional[i]; i++) {
        nacional[i] = tolower(nacional[i]);
    }
    
    // Logic - Priority: National > Wednesday > Standard
    if (strcmp(nacional, "sim") == 0) {
        // National movie has priority
        int total_tickets = qtd_inteiras + qtd_meias;
        total_a_pagar = total_tickets * PRECO_NACIONAL;
    }
    else if (strcmp(dia_semana, "quarta-feira") == 0) {
        // Wednesday (and not national)
        int total_tickets = qtd_inteiras + qtd_meias;
        total_a_pagar = total_tickets * PRECO_QUARTA;
    }
    else {
        // Standard pricing
        total_a_pagar = (qtd_inteiras * PRECO_CHEIO) + (qtd_meias * PRECO_MEIA_PADRAO);
    }
    
    // Output
    printf("Total à pagar:\n");
    printf("R$ %.2f\n", total_a_pagar);
    
    return 0;
}