#include <stdio.h>

int main () {
    int numerador, denominador;
    float div;
    do {
        printf("Digite o numerador e o denominador: ");
        scanf("%d%d", &numerador, &denominador);
    } while(denominador > numerador || denominador == 0);
    
    div = numerador / denominador;
    printf("%.2f", div);

    return 0;
}  