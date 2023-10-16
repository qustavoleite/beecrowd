#include <stdio.h>

float calcTemp(float grausF){
    float grausC = (grausF - 32.0) * (5.0 / 9.0);
    return grausC;
}

int main (){
    float gFahrenheit, gCelsius;
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &gFahrenheit);

    gCelsius = calcTemp(gFahrenheit);
    printf("%.2f graus fahrenheit para %.2f graus celsius", gFahrenheit, gCelsius);

    return 0;
}

/*
#include <stdio.h>

float calTemp(float grausC) {
    float grausF = ((9 * grausC) + 160) / 5;
    return grausF;
}

int main (){
    float gCelsius, gFahrenhiet;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &gCelsius);

    gFahrenhiet = calTemp(gCelsius);
    printf("%f graus celsius para fahrenheit e: %.2f", gCelsius, gFahrenhiet);

    return 0;
}*/