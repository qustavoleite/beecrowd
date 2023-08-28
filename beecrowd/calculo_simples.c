#include <stdio.h>

int main () {
    int codigoPecas, numeroPecas, codigoPecas2, numeroPecas2;
    float valorPecas, valorPecas2, total;

    scanf("%d %d %f %d %d %f", &codigoPecas, &numeroPecas, &valorPecas, &codigoPecas2, &numeroPecas2, &valorPecas2);
    
    total = (numeroPecas*valorPecas) + (numeroPecas2*valorPecas2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}