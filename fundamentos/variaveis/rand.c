#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
    srand(time(NULL));
    int n = rand() % 10 + 1; // vai gerar um numero entre 1 e 10
    printf("Eu gerei o numero (%d)", n);
}