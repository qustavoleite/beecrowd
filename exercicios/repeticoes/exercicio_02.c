/*Escreva um programa que imprima todos os numeros inteiros de 0 a 50*/

int main () {
    int i = 1, numero = 50;

    do {
        printf("%d\n", i);
        i++;
    } while(i <= numero);

    /*for(i = 1; i <= numero; i++){
        printf("%d\n", i);
    }

    while(i <= numero) {
        printf("%d\n", i);
        i++;
    }*/
    return 0;
}