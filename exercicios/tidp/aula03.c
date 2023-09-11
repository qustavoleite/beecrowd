/*crie um programa que leia um número inteiro e mostre se ele é par ou impar*/

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

//par quando o rsto da divisão é 0
//impares quando o resto da divisão é 1