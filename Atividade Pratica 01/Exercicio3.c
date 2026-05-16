//cálculo de média do aluno a partir de 3 notas dadas ao sistema 
// O(A) estudante NOME ficou com media NOTA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main () {

char nome[30];
float nota1, nota2, nota3;

printf("Digite o seu nome:");
fgets(nome, 30, stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("Digite a primeira nota: ");
scanf("%f", &nota1);

printf("Digite a segunda nota: ");
scanf("%f", &nota2);

printf("Digite a terceira nota: ");
scanf("%f", &nota3);
float media = (nota1 + nota2 + nota3) / 3;

printf(" O(A) estudante %s ficou com media %.2f", nome, media);
return 0;
}