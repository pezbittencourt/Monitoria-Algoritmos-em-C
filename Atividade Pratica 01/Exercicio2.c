#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que avalie quanto cada pessoa deve contribuir para o churrasco de domingo.
O programa deve receber a quantidade de pessoas e calcular o quanto de carne, linguiça e frango
deve ser comprado e quanto cada pessoa deve pagar.
Considere que cada pessoa consome 300g de carne (R$ 50,00/kg), 200g de linguiça (R$ 28,00/kg) e 150g de frango (R$ 22,00/kg).
*/

int main()
{
    int pessoas;
    float precoCarne, precoFrango, precoLinguica;

    printf("quantas pessoas vao ao churrasco?");
    scanf("%d", &pessoas);

    //quantidade da compra:
    float carneKg = (pessoas * 0.3);
    float linguicaKg = (pessoas * 0.2);
    float frangoKg = (pessoas * 0.15);

    // preco das carnes:
    precoCarne = 50.0;
    precoLinguica = 28.0;
    precoFrango = 22.0;

    float consumoIndividual = ((precoCarne * 0.3) + (precoLinguica * 0.2) + (precoFrango * 0.15));
    float precoTotal = consumoIndividual * pessoas;
    printf("preço dos alimentos\n%.2f, %.2f, %.2f\n", precoCarne, precoLinguica, precoFrango);
    printf("\nTotal comprado:\n%.2fkg carne\n%.2fkg linguica\n%.2fkg frango\n\n", carneKg, linguicaKg, frangoKg);
    printf("consumo individual aproximado: %.2f\n", consumoIndividual);
    printf("Valor total da compra: %.2f", precoTotal);
    return 0;
}