#include <stdio.h>

int numerosPrimos(int numero){
    int i;
    for(i = 1; i <= numero; i++){
        if(numero%i == 0){
            printf("%d", numero);
        }
    }
    return numero;
}

int main (){
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    resultado = numerosPrimos(numero);
    printf("%d", resultado);
    return 0;
}
