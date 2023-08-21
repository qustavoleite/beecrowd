#include <stdio.h>
#include <locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    printf("Listagem de Alunos\n");
    printf("Nome \t \t Nota\n");
    printf("----------------------\n");
    printf("Ana beatriz \t 8.5\n");
    printf("Bianca Martins \t 9.0\n");
    printf("Claudio de Sa \t 5.5\n");
    printf("Giovana Silva \t 7.5");
}