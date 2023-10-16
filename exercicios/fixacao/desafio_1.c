/*Desenvolva um programa na linguagem de programação C que verifique o maior número entre três informados, examinando se os valores são diferentes entre si.*/

#include <stdio.h>

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 != n2 && n1 != n3 && n2 != n3){
        if(n1 > n2 && n1 > n3){
            printf("O numero maior e: %d", n1);
        } else if (n2 > n1 && n2 > n3){
            printf("O maior numero e: %d", n2);
        } else {
            printf("O maior numero e: %d", n3);
        }
    }
    return 0;
}