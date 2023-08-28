#include <stdio.h>

int main () {
    int horas, vm;
    double litros;
    scanf("%d %d", &horas, &vm);
    litros = (horas*vm)/12.0;
    printf("%.3lf\n", litros);

    return 0;
}