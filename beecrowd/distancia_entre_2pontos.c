#include <stdio.h>
#include <math.h>

int main () {
    double x1, y1, x2, y2, distancia;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    distancia = sqrt(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
    printf("%.4lf\n", distancia);
    return 0;
}

/*

#include <stdio.h>
#include <math.h>

int main() {
    double numero, raiz;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    raiz = sqrt(numero);

    printf("A raiz quadrada de %.2lf é %.2lf\n", numero, raiz);

    return 0;
}


*/