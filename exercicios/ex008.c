#include <stdio.h>

void main () {
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    /*antes = letra - 1;
    depois = letra + 1;*/
    printf("Antes da letra %c temos a letra %c e depois temos a letra %c.\n", letra, (letra-1), (letra+1));
}