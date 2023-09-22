/*desenvolva um programa na linguagem C que receba 3 notas (AV1, AV2 e AVF) de um aluno, na sequencia o programa deve retornar a media final do aluno. baseado em:
MP = (AV1 + AV2) / 2
MF = (MP + AVF) / 2
AVF: MP >= 4.0 e MP < 7.0
aprovado:
reprovado:
*/

#include <stdio.h>

void main() {
    double av1, av2, avf, mp, mf;

    printf("Digite sua nota da av1: ");
    scanf("%lf", &av1);

    printf("Digite sua nota da av2: ");
    fflush(stdin);
    scanf("%lf", &av2);

    mp = (av1 + av2) / 2;

    if (mp < 7.0) {
        printf("Digite a nota da avf: ");
        fflush(stdin);
        scanf("%lf", &avf);

        mf = (mp + avf) / 2;
        printf("A media final e: %.2lf", mf);
    } else {
        printf("A media final e: %.2lf", mp);
    }
}