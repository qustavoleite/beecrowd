#include <stdio.h>

void main () {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    int mai = (n1>n2)?n1:n2;
    printf("Entre %d e %d, o maior foi %d", n1, n2, mai);
}

/*
    int a = 14, b = 8;
    int c = (a>b)?1:2;
    printf("%d", c);

    float media = 8.5;
    printf("Sua situacao e %s", (media>=7)?"aprovado":"reprovado");
*/