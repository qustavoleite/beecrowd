#include <stdio.h>

void main () {
    float preco = 1000;
    float desc = preco - (preco * 10 / 100);
    printf("O valor: %.2f", desc);
}
/*
    int a = 3;
    int b = 2;
    int r = a + b;
    printf("Resultado: %d", r);

    float n1 = 5.5;
    float n2 = 8.5;
    float m = (n1 + n2) / 2;
    printf("a media e: %.2f", m);
*/