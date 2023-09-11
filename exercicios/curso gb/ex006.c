#include <stdio.h>

void main () {
    int num, ant, suc;
    printf("Digite um numero: ");
    scanf("%i", &num);
    ant = num - 1;
    suc = num + 1;
    printf("Analisando o numero %i, o antecessor e %i e o sucessor %i", num, ant, suc);
}