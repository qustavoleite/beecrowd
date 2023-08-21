#include <stdio.h>
//#define TOTAL 8 diretiva de pré-procesamento, o valor é substituido antes da compilação,  o const existe na memória e podemos definir o tipo primitivo

void main () {
    const int TOTAL = 8;
    printf("%d", TOTAL);
}