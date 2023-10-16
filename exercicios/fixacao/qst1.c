#include <stdio.h>

int main (){
    int a, b, c, menor, maior;
    scanf("%d%d%d", &a, &b, &c);

    maior = menor = a;
     if (b > maior) {
        maior = b;
     } else if (b < menor){
        menor = b;
     }

     if(c > maior){
        maior = c;
     } else if (c < menor){
        menor = c;
     }

     printf("menor: %d\nmaior: %d", menor, maior);

     return 0;
}