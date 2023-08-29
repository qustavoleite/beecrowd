#include <stdio.h>

int main () {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero  % 2 == 0) {
        printf("Numero par!");
    } else {
        printf("Numero impar!");
    }

    return 0;
}

//pares sempre iguais a 0
//impares sempre diferente de zero