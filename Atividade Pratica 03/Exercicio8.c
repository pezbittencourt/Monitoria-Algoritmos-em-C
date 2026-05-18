#include <stdio.h>

int main() {
    int posicao;
    long long fib_atual, fib_anterior, proximo;

    printf("Digite a posição desejada na sequência de Fibonacci: ");
    scanf("%d", &posicao);

    // Tratamento de posições inválidas
    if (posicao <= 0) {
        printf("Posição inválida! Informe um número inteiro positivo.\n");
        return 1;
    }

    // Casos base: posição 1 e 2 são ambos 1
    if (posicao == 1 || posicao == 2) {
        printf("O valor na posição %d é: 1\n", posicao);
        return 0;
    }

    // Inicializa os dois primeiros valores
    fib_anterior = 1;   // F(1)
    fib_atual = 1;      // F(2)

    // Calcula até a posição desejada
    for (int i = 3; i <= posicao; i++) {
        proximo = fib_anterior + fib_atual;
        fib_anterior = fib_atual;
        fib_atual = proximo;
    }

    printf("O valor na posição %d é: %lld\n", posicao, fib_atual);

    return 0;
}