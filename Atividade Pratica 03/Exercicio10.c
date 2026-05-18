#include <stdio.h>

int main() {
    int altura;

    scanf("%d", &altura);

    if (altura <= 0) {
        printf("Triângulo inválido\n");
        return 0;
    }


    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}