#include <stdio.h>
#include <string.h>

void main () {
    char sit[10];
    float media = 6;
    strcpy(sit, (media>=7)?"aprovado":"reprovado"); //essa função é usada para copiar uma string de uma variavel para outra
    printf("a situacao do aluno e %s!", sit);
}