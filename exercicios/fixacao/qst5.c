#include <stdio.h>

int calcFatorial(int numero){
    int fatorial, i;
    fatorial = numero;
    for (i = numero-1; i >= 1; i--){
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero, resultado;
    printf("digite um numero: ");
    scanf("%d", &numero);
    resultado = calcFatorial(numero);
    printf("o fatorial de %d e %d", numero,  resultado);
    return 0;
}