#include <stdio.h>

float calcMedia(float nota1, float nota2){
    float media, notaRec, mediaFin;
    media = (nota1 + nota2) /2.0;

    if (media >= 6){
        printf("Aprovado");
    } else {
        printf("Reprovado, digite a nota da recuperacao: ");
        scanf("%f", &notaRec);
        mediaFin = (nota1 + nota2 + notaRec) / 3.0;
        if(mediaFin >= 6){
            printf("aprovado!");
        }else {
            printf("reprovado!");
        }
    }
    return mediaFin;
}

int main (){
    float n1, n2, mediaFinal;
    printf("Digite suas duas notas: ");
    scanf("%f%f", &n1, &n2);

    mediaFinal = calcMedia(n1, n2);
    return 0;

}