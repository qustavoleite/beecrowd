/*Crie um programa que leia a idade de 5 pessoas, ao termino da leitura deve ser mostrada a quantidade de pessoas que tem idade inferior a 18 anos e a quantidade de pessoas que tem a idade igual ou superior a 18 anos.*/

#include <stdio.h>

void main() {
    int i, idade, qtMenor, qtMaior;
    qtMenor = 0; //limpando o lixo de memoria
    qtMaior = 0;
   
    for(i = 1; i <= 5; i++) {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade > 18) {
            qtMenor++;
        } else {
            qtMaior++;
        }
    }

    printf("Existem %d pessoas com a idade menor que 18 e %d pessoas com a idade menor que 18", qtMenor, qtMaior);
}