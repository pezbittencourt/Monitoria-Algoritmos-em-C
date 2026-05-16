#include <stdio.h>
#include <string.h>

int main() {

    char nome[30];
    char curso[50];
    char hobby[50];
    int semestre;

    printf("Diga seu nome: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Diga seu curso: ");
    fgets(curso, 50, stdin);
    curso[strcspn(curso, "\n")] = '\0';

    printf("Diga seu semestre: ");
    scanf("%d", &semestre);
    getchar();

    printf("Diga seu hobby favorito: ");
    fgets(hobby, 50, stdin);
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("\nPrazer, eu sou o(a) %s!\n", nome);
    printf("Atualmente estou no %do semestre de %s e meu hobby favorito eh %s.\n",
           semestre, curso, hobby);

    return 0;
}