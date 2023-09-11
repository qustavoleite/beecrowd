#include <stdio.h>

void main() {
    int num, dob;
    float ter;
    printf("Digite um numero: ");
    scanf("%d", &num);
    dob = num * 2;
    ter = (float)num / 3;
    printf("Analisando o seu numero %d, seu dobro e %d e a terca parte e %.2f", num, dob, ter);
}