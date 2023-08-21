#include <stdio.h>


void main () {
    char r;
    char s;
    printf("Digite uma letra\n");
    fflush(stdin); //  usada para limpar o buffer de saída (output buffer)
    r = getchar(); //  é uma forma de ler UM caractere da entrada padrão (stdin). é usada para obter um caractere da entrada e atribuí-lo a uma variável.
    printf("Digite outra letra\n");
    fflush(stdin); 
    s = getchar();
    printf("Voce digitou a letra \"%c\" e \"%c\"", r, s);
}

    // char r;
    // char s;
    // printf("Digite uma letra\n");
    // fflush(stdin);
    // scanf("%c", &r);
    // printf("Digite outra letra\n");
    // fflush(stdin);
    // scanf("%c", &s);
    // printf("Voce digitou a letra \"%c\" e \"%c\"", r, s);