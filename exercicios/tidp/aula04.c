/*crie um programa que leia 5 numeros inteiros, caso o numero seja par ele deve multiplicar por dois e mostrar o resultado, caso seja impar ele deve multiplicar por 3 e mostrar o resultado*/

#include <stdio.h>

int main () {
    int i, numero;
    for (i = 1; i <= 5; i++) {
        printf("Informe um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            //numero = numero * 2;
            numero *= 2;
        } else {
            numero *= 3;
        }

        printf("Resultado: %d\n", numero);
    }

    return 0;
}
