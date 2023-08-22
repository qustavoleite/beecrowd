#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
    srand(time(NULL));
    int num = rand() % 5 + 1;
    int myNum;

    printf("vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual o seu palpite?\n");
    scanf("%d", &myNum);
    printf("Eu pensei no numero %d e voce pensou no %d", num, myNum);
}