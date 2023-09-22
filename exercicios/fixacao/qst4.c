/*Voce foi contratado pelo doutor chapatin para fazer um programa na linguagem c que receba um numero inteiro que leia um numero inteiro e calcule o fatorial desse numero*/
// fatorial é o produto do numero vezes os seus antecessores 6*5*4*3*2*1 = 720

#include <stdio.h>

void main () {
    int i, numero, fatorial;
    scanf("%d", &numero);

    fatorial = numero;

    for(i = numero - 1; i >= 1; i--) {
        fatorial *= i;
    }

    printf("o fatorial de %d e %d", numero, fatorial);
}