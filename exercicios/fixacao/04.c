//mostre a serie Fibonacci ate a posição informada pelo usuario
#include <stdio.h>

int main() {
  int pos, i, primeiro = 0, segundo = 1, proximo;

  printf("Informe quantos termos da serie de Fibonacci voce deseja mostrar: ");
  scanf("%d", &pos);
  printf("Serie de Fibonacci ate o %d termo:\n", pos);

  for (i = 0; i < pos; i++) {
    if (i <= 1) {
      proximo = i;
    } else {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
    }
    printf("%d ", proximo);
  }

  printf("\n");
  return 0;
}


//1  2  3  4  5  6
/*0  1  1  2  3  5
      A
   A1
A2

#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;

    printf("Serie Fibonacci (8 primeiros termos)\n");
    printf("%d ", ant2);
    printf("%d", ant1);

    for(i=3; i<=8; i++) {
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
    }

    printf("\n");
    system("pause");
}*/

// #include <stdio.h>

// int main(void) {
//     int fib_ant, fib_atual, pos, antigo_fib, prox_fib, novo_fib, i;
//     printf("Informe a posicao: ");
//     scanf("%d", &pos);

//     fib_ant = 0;
//     fib_atual = 1;
//     for (int i = 0; i < pos; i++) {
//     printf("%d ", fib_atual);
      
//     prox_fib = fib_atual + fib_ant;
//     novo_fib = fib_atual + fib_ant;
//     antigo_fib = fib_atual;
//     fib_atual = novo_fib;
//     fib_ant = antigo_fib;
//   }

//     printf("\nFim do programa!");
//     return 0;
// }