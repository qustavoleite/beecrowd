#include <stdio.h>

void main() {
    char nome[20], nome2[20], nome3[20];
    char sexo, sexo2, sexo3;
    float nota, nota2, nota3;

    printf("\nCadastrando a primeira pessoa:\n");
    printf("-------------------------------\n");

    fflush(stdin);
    printf("NOME: ");
    gets(nome);
    printf("SEXO [M/F]: ");
    sexo = getchar();
    printf("NOTA: ");
    scanf("%f", &nota);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("-------------------------------\n");

    fflush(stdin);
    printf("NOME: ");
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("-------------------------------\n");

    fflush(stdin);
    printf("NOME: ");
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("--------------------------------\n");
    printf("NOME                SEXO NOTA\n");
    printf("%-20s %c %6.1f\n", nome, sexo, nota);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);
    printf("--------------------------------");
}