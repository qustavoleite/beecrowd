/*
crie um programa que leia dois numeros inteiro e mostre qual é o maior e qual é o menor
*/

#include <stdio.h>

int main () {
    int numero1, numero2;
    printf("Informe os dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2) {
        printf("1 - O %d e maior que o %d", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("2 - O %d e menor que o %d ", numero2 , numero1);
    } else {
        printf("3 - Os dois numeros sao iguais!");
    }
    

    return 0;
}