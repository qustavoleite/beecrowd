#include <stdio.h>

int main () {
    float media, perPositivos, perNegativos, valor = -1, soma = 0;
    int qtdPositivos = 0, qtdNegativos = 0, total;

    while (valor != 0){
        printf("Digite um numero: ");
        scanf("%f", &valor);
        if (valor > 0){
            qtdPositivos++;
        } else {
            qtdNegativos++;
        }
        soma += valor;
    }

    total = qtdPositivos + qtdNegativos;
    perPositivos = (qtdPositivos*100) / total;
    perNegativos = (qtdNegativos*100) / total;
    media = soma/total;

    printf("total = %d\n", total);
    printf("Percentual de positivos = %.2f\n", perPositivos);
    printf("Percentual de negativos = %.2f\n", perNegativos);
    printf("Media = %.2f\n", media);
    return 0;
}