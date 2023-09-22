/*
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.
*/

#include <stdio.h>

int main() {
    int M, N, cont, k;
    while (1) {
        k = 0;
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        } else if (M > N) {
            cont = N;
            for (cont; cont <= M; cont++) {
                printf("%d ", cont);
                k += cont;
            }
            printf("Sum=%d\n", k);
        } else {
            cont = M;
            for (cont; cont <= N; cont++) {
                printf("%d ", cont);
                k += cont;
            }
            printf("Sum=%d\n", k);
        }
    }
    return 0;
}