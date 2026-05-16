#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main () {


//Cálculo de IMC


printf("Vamos verificar o seu IMC!\nPrimeiro, me diga seu nome:");

char nome[30];
fgets(nome, 30, stdin);
nome[strcspn(nome, "\n")] = '\0';

float peso, altura;

printf("%s qual a sua altura?", nome);
scanf("%f", &altura);

printf("%s agora me diga seu peso:", nome);
scanf("%f", &peso);

printf("%s o seu IMC eh de: %.4f", nome, peso/pow(altura,2));
//NOME, seu  IMC é de IMC (peso / pow(altura, 2))
return 0;



}