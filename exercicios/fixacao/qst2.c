#include <stdio.h>

int main() {
    float av1, av2, avf, mp, mf;
    scanf("%f%f", &av1, &av2);
    mp = (av1 + av2) / 2;

    if (mp >= 4.0 && mp < 7.0) {
        printf("Digite a nota a avf: ");
        scanf("%f", &avf);
        mf = (mp + avf) /2;
        if(mf <= 5.0){
            printf("reprovado na avf");
        } else {
            printf("aprovado na avf");
        }
    } else if (mp < 4.0){
        printf("reprovado direto");
        } else {
            printf("aprovado");
        }

    return 0;
}