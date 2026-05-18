#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavraOriginal[100];
    char palavraSoletrada[100] = "";  // Inicializa como vazia
    char letra[2];  // Para armazenar uma letra
    
    printf("==== Desafio da Soletração ====\n\n");
    
    // Solicita a palavra original
    printf("Digite uma palavra: ");
    fgets(palavraOriginal, sizeof(palavraOriginal), stdin);
    
    // Remove a quebra de linha do fgets
    palavraOriginal[strcspn(palavraOriginal, "\n")] = '\0';
    
    printf("\nPalavra original: %s\n\n", palavraOriginal);
    printf("Agora, digite a palavra letra por letra (digite 0 para encerrar):\n");
    
    // Loop para coletar as letras
    while (1) {
        printf("Digite a letra: ");
        fgets(letra, sizeof(letra), stdin);
        
        // Remove a quebra de linha do fgets
        letra[strcspn(letra, "\n")] = '\0';
        
        // Verifica se é "0" para encerrar
        if (strcmp(letra, "0") == 0) {
            break;
        }
        
        // Concatena a letra à palavra soletrada
        strcat(palavraSoletrada, letra);
    }
    
    // Exibe os resultados
    printf("\n==== Resultado ====\n");
    printf("Palavra original: %s\n", palavraOriginal);
    printf("Palavra soletrada: %s\n", palavraSoletrada);
    
    return 0;
}