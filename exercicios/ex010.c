#include <stdio.h>

void main () {
    char produto[20];
    float preco, desc, novop;

    printf("Produto: ");
    fflush(stdin);
    gets(produto);

    printf("Preco do %s:", produto);
    scanf("%f", &preco);
    
    printf("Desconto: (%%) ");
    scanf("%f", &desc);

    novop = preco - (preco * desc / 100);
    printf("O produto custava RS %.2f. Porem com %.2f%% de desconto, passa a custar RS %.2f.\n", preco, desc, novop);
}