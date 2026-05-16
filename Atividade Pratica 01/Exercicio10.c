#include <stdio.h>
#include <string.h>

int main() {

    char meta[100];

    float valorMeta;
    float salario;
    float despesas;

    printf("\nQual a sua meta atual?");
    fgets(meta, 100, stdin);
    meta[strcspn(meta, "\n")] = '\0';

    printf("Insira o valor da meta:");
    scanf("%f", &valorMeta);
    printf("Insira seu salário:");
    scanf("%f", &salario);
    printf("Insira o total de despesas");
    scanf("%f", &despesas);

    float saldo = salario - despesas;

    printf("Meta: %s (R$ %.2f)\n",
           meta, valorMeta);

    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n",
           salario, despesas);

    printf("Saldo após despesas: R$ %.2f\n",
           saldo);

    if (saldo > 0){
    float reserva = saldo * 0.30;

    float valorMetaMensal =
        saldo - reserva;

    float prazo =
        valorMeta / valorMetaMensal;

    printf("Reserva fixa (30%%): R$ %.2f\n",
           reserva);

    printf("Valor disponível para a meta: R$ %.2f por mês\n",
           valorMetaMensal);

    printf("Prazo estimado para atingir a meta: %.2f meses",
           prazo);
    }
    else {
        printf("Recomendamos que primeiro faça o balanceamento da sua conta para deixa-la positiva para poder juntar a reserva");
    }
    return 0;
}