/*
Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
A saída contém apenas um valor inteiro.
*/
#include <stdio.h>

int main() {
  
  int A, N, i, soma = 0;
  scanf("%d %d", &A, &N);
  
  while (N <= 0)
    scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    soma += A;
    A++;
  }
  
  printf("%d\n", soma);
  
  return 0;
}