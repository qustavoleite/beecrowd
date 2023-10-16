/* Fazer um programa na linguagem de programação C quemostre o fatorial de um número informado pelo usuário.*/

#include <stdio.h>

int main() {
    int numero, fatorial, i;
    scanf("%d", &numero);

    fatorial = numero;

    for(i = numero -1; i >= 1; i--){
        fatorial *= i;
    }

    printf("O fatorial de %d e %d", numero, fatorial);

    return 0;
}