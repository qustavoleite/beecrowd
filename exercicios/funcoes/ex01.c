#include <stdio.h>

float calcSalRec (float numeroHorasTrabalhadas, float salarioMinimo) {
    float horaTrabalhada, salarioBruto, imp, salarioReceber;
    horaTrabalhada = salarioMinimo / 2.0;
    salarioBruto = numeroHorasTrabalhadas * horaTrabalhada;
    imp = salarioBruto * 3 / 100;
    salarioReceber = salarioBruto - imp;
    return salarioReceber;
}

int main (){
    float nHrTrab, salMin, salRec;
    printf("Digite o numero de horoas trabalhadas e o salario minimo: ");
    scanf("%f%f", &nHrTrab, &salMin);

    salRec = calcSalRec(nHrTrab, salMin);
    printf("%.2f", salRec);

    return 0;
}