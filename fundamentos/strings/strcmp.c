#include <stdio.h>
#include <string.h>

void main () {
    char s1[] = "Gustavo";
    char s2[] = "Leite";
    int result = strcmp(s1, s2); //compara o tamanho de duas strings
    printf("O resultado da comparcao e %d", result);
}