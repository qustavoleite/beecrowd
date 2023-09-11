#include <stdio.h>

void main() {
    float nota1, nota2, media;
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Com as notas %.1f e %.1f o aluno tem a media %.1f\n", nota1, nota2, media);
    printf("A sua situacao e %s.\n", (media>=7)?"APROVADO":"REPROVADO");
}