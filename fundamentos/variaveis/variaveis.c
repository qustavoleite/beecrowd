#include <stdio.h>

void main () {
    char *nome = "Gustavo";
    unsigned int idade = 33;
    char sexo = 'M';
    float peso = 43.60;

    printf("O %s tem %d anos de idade, e do sexo %c e pesa %.2fKg!", nome, idade, sexo, peso);
}