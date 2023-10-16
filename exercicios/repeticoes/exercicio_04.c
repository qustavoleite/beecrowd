/*Faça um programa que calcule e mostre valores de graus celsius e graus fahrenheit, cujos graus variem de 40 a 70 F de 1 em 1. A conversao de graus Fahrenheit (F) para graus Celsius (C) é dada por C=5/9*(F-32). */

int main () {
    int F = 40;
    float C;

    while (F <= 70){
        C = 5.0/9.0 * (F-32);
        printf("%dF = %.2fC\n", F, C);
        F++;
    }

    /*
    for(F = 40; F <= 70; F++){
        C = 5.0/9.0 * (F-32);
        printf("%dF = %.2fC\n", F, C);
    }
    */
    return 0;
}