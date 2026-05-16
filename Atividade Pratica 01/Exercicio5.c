//nome, valor da compra, cupom

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

char nome[30];
float valorCompra, desconto;

printf("Digite o seu nome:");
fgets(nome, 30, stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("Qual foi o valor total da compra?");
scanf("%f", &valorCompra);

printf("Qual foi a porcentagem de desconto:");
scanf("%f", &desconto);

float valorTotal = valorCompra - (valorCompra * (desconto/100)); 

printf("Olá, %s! Sua compra no valor de %.2f foi confirmada!\nFoi aplicado um desconto de %.0f%%.\nO total final ficou em %.2f.", nome, valorCompra, desconto, valorTotal);
return 0;
}