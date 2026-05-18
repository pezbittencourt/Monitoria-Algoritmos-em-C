#include <stdio.h>

int fatorial (int valor) { 
    if (valor == 0){
        return 1;
    }
    else {
        return valor * fatorial(valor-1);
    }
}
int main () {
    int valor;
    printf("qual o valor a ser fatorado?");
    scanf("%d", &valor);   
    printf("o fatorial de %d eh %d",valor, fatorial(valor));
}