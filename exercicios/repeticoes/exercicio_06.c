#include <stdio.h>

int main () {
    int a = 0, b = 0, c = 0, d = 0, i = 0;

    while (i >= 0){
        printf("Digite um numero: ");
        scanf("%d", &i);
        if (i>=0 && i<=25){
            a++;
        } else if (i>= 26 && i<=50){
            b++;
        } else if (i >= 51 && i <= 75){
            c++;
        } else if (i >= 76 && i <= 100){
            d++;
        }
    }
    printf("[0,25]= %d\n", a);
    printf("[26,50]= %d\n", b);
    printf("[51,75]= %d\n", c);
    printf("[75,100]= %d\n", d);

    return 0;
}