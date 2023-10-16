#include <stdio.h>

float calcularArea(float raio){
    float area;
    area = 3.14*(raio*raio);
    return area;
}

int main (){
    float raio, areaCirc;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    areaCirc = calcularArea(raio);
    printf("%f", areaCirc);
    return 0;
}