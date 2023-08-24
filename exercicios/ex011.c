#include <stdio.h>

void main () {
    int num;
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);
    printf("o numero %d que voce digitou e: %s.\n", num, (num%2==0)?"par":"impar");
}
