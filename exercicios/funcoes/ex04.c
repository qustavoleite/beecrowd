#include <stdio.h>

int verificaPrimo(int numero) {
  int i, cont = 0;
  for (i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      cont++;
    }

    if (cont > 2) {
      break;
    }
  }
  if (cont > 2) {
    printf("nao e primo!");
    return 1;
  } else {
    printf("e primo!");
    return 0;
  }
}

int main() {
  int numero, resultado;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  resultado = verificaPrimo(numero);

  return 0;
}