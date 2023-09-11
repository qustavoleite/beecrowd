/*mostre se o numero digitado pelo usuario é primo*/

#include <stdio.h>

void main () {
    int i, numero;
    int contador = 0; // contabiliza a quantidade de vezes conseguimos dividir o numero por numeros menores que ele 
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
        if(numero%i == 0){
            contador++;
        }

        if(contador > 2){
            break;
        }
    }

    if(contador > 2){
        printf("%d nao eh primo", numero);
    } else {
        printf("%d eh primo", numero);
    }
}