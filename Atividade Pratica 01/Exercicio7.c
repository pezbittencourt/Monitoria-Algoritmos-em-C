#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
        -----leitura rápida de um livro -----

    entrada de dados:
-NOME DA PESSOA
-NOME DO LIVRO
-NUMERO DE PAGINAS
-TEMPO EM SEGUNDOS DE LEITURA POR PAGINA 


    saída de dados:
-NOME DA PESSOA, você finalizará a leitura do livro NOME DO LIVRO em aproximadamente HORAS
    */

int main () {

    char nome[30];
    char livro[50];
    short paginas;
    short tempoDeLeitura;

    printf ("\nEste programa calcula em quanto tempo voce finalizara o seu livro atual baseado na sua velocidade de leitura\n\n");
    
    printf("Qual seu nome?");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Qual o nome do livro que voce esta lendo atualmente?");
    fgets(livro, 50, stdin);
    livro[strcspn(livro, "\n")] = '\0';

    printf("Qual a quantidade de paginas do livro?");
    scanf("%hd", &paginas);

    printf("Em quantos segundos voce finaliza a leitura de uma pagina?");
    scanf("%hd", &tempoDeLeitura);

    float totalTempoDeLeitura = (paginas * tempoDeLeitura) / 3600 ; 

    printf("%s, voce finalizara a leitura do livro %s em aproximadamente %.2f horas", nome, livro, totalTempoDeLeitura);
    return 0;


    
}