#include <stdio.h>

int main() {

    int pequeno, medio, grande;
    float desconto;

    scanf("%d", &pequeno);
    scanf("%d", &medio);
    scanf("%d", &grande);
    scanf("%f", &desconto);

    float subtotal =
        (pequeno * 13.5) +
        (medio * 15.0) +
        (grande * 17.5);

    float totalFinal =
        subtotal - (subtotal * (desconto / 100));

    printf("Seu pedido foi registrado.\n");
    printf("- Açaí P: %d\n", pequeno);
    printf("- Açaí M: %d\n", medio);
    printf("- Açaí G: %d\n", grande);
    printf("Desconto de %.0f%% aplicado.\n", desconto);
    printf("Total R$ %.2f", totalFinal);

    return 0;
}