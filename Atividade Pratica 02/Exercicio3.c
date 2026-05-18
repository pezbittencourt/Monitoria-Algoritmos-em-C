#include <stdio.h>
#include <stdlib.h>

//switch case de dias da semana indo de 0 - domingo até 6- sábado com default: dia da semana inválido

int main () {
int dia;
printf("Digite o numero correspondente ao dia da semana, indo de 0 a 6:");
scanf("%d", &dia);

switch (dia){

    case 0:
        printf("0 - Domingo");
        break;

    case 1:
        printf("1 - Segunda");
        break;

    case 2:
        printf("2 - Terca");
        break;

    case 3:
        printf("3 - Quarta");
        break;

    case 4:
        printf("4 - Quinta");
        break;

    case 5:
        printf("5 - Sexta");
        break;

    case 6:
        printf("6 - Sabado");
        break;

    default:
        printf("Dia invalido");
}

return 0;

}
