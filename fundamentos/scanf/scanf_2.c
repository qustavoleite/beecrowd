#include <stdio.h>

void main () {
    int n;
    float m;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    printf("Digite um numero real\n");
    scanf("%f", &m);
    printf("O numero inteiro digitado foi %d e o numero real foi %.1f Obrigado!", n, m);
}