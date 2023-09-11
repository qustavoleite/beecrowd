#include <stdio.h>
#include <string.h>

void main () {
    char nome[] = "Gustavo";
    int tam = strlen(nome); //o nome dessa função vem de string lenght que é o tamanho da string
    printf("O nome %s tem %d letras", nome, tam);
}