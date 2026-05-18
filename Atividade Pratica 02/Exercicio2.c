#include <stdio.h>
#include <string.h>

int main() {

    char cor[20];

    printf("Qual a cor do semáforo?");
    fgets(cor, 20, stdin);
    cor[strcspn(cor, "\n")] = '\0';

    if(strcmp(cor, "Vermelho") == 0) 

        printf("Espere");

    else if(strcmp(cor, "Verde") == 0) 
        printf("Atravesse");

    else 
        printf("Farol inoperante");
    
    return 0;
}