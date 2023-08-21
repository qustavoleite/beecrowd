#include <stdio.h>

void main () {
    char nome[30];
    char sexo;
    float nota;

    char nome2[30];
    char sexo2;
    float nota2;

    char nome3[30];
    char sexo3;
    float nota3;

    printf("NOME:");
    gets(nome);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sexo = getchar();
    printf("NOTA:");
    fflush(stdin);
    scanf("%f", &nota);

    fflush(stdin);
    printf("NOME:");
    gets(nome2);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sexo2 = getchar();
    printf("NOTA:");
    fflush(stdin);
    scanf("%f", &nota2);

    fflush(stdin);
    printf("NOME:");
    gets(nome3);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sexo3 = getchar();
    printf("NOTA:");
    fflush(stdin);
    scanf("%f", &nota3);

    printf("Listagem Completa\n");
    printf("-------------------------\n");
    printf("NOME \t \t SEXO NOTA\n");
    printf("%s \t %c %.2f\n", nome, sexo, nota);
    printf("%s \t %c %.2f\n", nome2, sexo2, nota2);
    printf("%s \t %c %.2f\n", nome3, sexo3, nota3);
}