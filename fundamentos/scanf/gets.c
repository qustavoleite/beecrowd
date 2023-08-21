#include <stdio.h>

void main () {
    char nome[30];
    char ender[40];
    printf("Digite seu nome\n");
    gets(nome); // comando especifico para ler strings
    printf("Digite seu endereco\n");
    gets(ender);
    printf("Voce digitou \"%s\" que mora em \"%s\"", nome, ender);
}