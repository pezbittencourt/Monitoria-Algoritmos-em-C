//simular conversão de real para dolar com dolar a 5.42

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");
   
    float real;
    float dolar = 5.42;
    
    printf("quantos reais você quer converter?");
    scanf("%f", &real);
  
    printf("conversão para dolar: %.2f", real/dolar);
return 0;


}