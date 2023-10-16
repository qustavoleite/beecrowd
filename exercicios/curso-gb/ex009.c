#include <stdio.h>

void main () {
    char nome[20];
    float n1, n2, m;
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);

    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &n1);

    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &n2);

    m = (n1 + n2) / 2;

    printf("O Aluno %s, tirou as notas %.1f e %.1f e sua media foi %.1f!", nome, n1, n2, m);
}