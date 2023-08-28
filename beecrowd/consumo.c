#include <stdio.h>

int main () {
    int kmPecorrido;
    float combustivelGasto, consumoMedio;
    scanf("%d %f", &kmPecorrido, &combustivelGasto);

    consumoMedio = kmPecorrido/combustivelGasto;
    printf("%.3f km/l\n", consumoMedio); 

    return 0;
}