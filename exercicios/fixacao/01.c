#include <stdio.h>
void main () {
    int n1, n2, soma;
    printf("Digite o numero 1: ");
    fflush(stdin);
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    fflush(stdin);
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("O resultado da soma e %d", soma);
}