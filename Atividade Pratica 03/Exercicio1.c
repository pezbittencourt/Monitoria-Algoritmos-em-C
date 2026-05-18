#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//tabuada


int tabuada(int numero){
int resultado;

    for (int i = 1; i <= 10; i++){

    resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    return 0;
}

int main(){
int numero;

printf("Vamos fazer uma tabuada!\nDigite o numero que você quer ver a tabuada:");
scanf("%d", &numero);

tabuada(numero);

}