#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pesoInvalido(int peso)
{

    if (peso <= 0)
        printf("Peso inválido");
    return 0;
}

int main()
{

    // preço da sorveteria
    // preço por 100g até de 1kg = 3,50 (preco = peso x 0,035)
    // preço por 100g a partir de 1kg = 3,00 (preço = peso x 0,03)

    int peso;
    float preco;

    printf("Quanto deu o peso total do sorvete, em gramas?");
    scanf("%d", &peso);

    if (peso <= 0)
        pesoInvalido(peso);

    else {
        if (peso < 1000)
            preco = peso * 0.035;
        
        else 
            preco = peso * 0.030;
          
    printf("Peso: %d\nPreço: %.2f", peso, preco);
    }
  return 0;
}