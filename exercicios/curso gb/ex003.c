#include <stdio.h>

void main () {
    char nome[30];
    int idade;
    float peso;
    
    printf("Qual o seu nome?\n");
    //scanf("%s", &nome);
    gets(nome);
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    printf("Qual seu peso?\n");
    scanf("%f", &peso);

    printf("Muito prazer, %s. Voce tem %d anos e pesa %.2fkg correto?", nome, idade, peso);
}