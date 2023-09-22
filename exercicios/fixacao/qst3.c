/*construa um programa em C que leia tres numeros inteiros (A, B, C) onde A seja maior que 1; na sequencia o programa deve mostrar todos os numeros entre B e C que sejam divisiveis por A*/

#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite um valor inteiro para A (deve ser maior que 1): ");
    scanf("%d", &A);

    if (A <= 1) {
        printf("A deve ser maior que 1.\n");
        return 1;
    }

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (B > C) {
        printf("B deve ser menor ou igual a C.\n");
        return 1;
    }

    printf("Os numeros divisiveis por %d entre %d e %d sao:\n", A, B, C);

    // Loop para verificar e imprimir os números divisíveis por A entre B e C
    for (int i = B; i <= C; i++) {
        if (i % A == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}