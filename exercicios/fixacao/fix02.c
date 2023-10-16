/*calculo o valor do pagamento de uma parcela em atraso cobrando juros de 0.5% ao dia

Valor a Pagar = Valor Original + (Valor Original * Taxa de Juros Diária * Número de Dias em Atraso)
*/

#include <stdio.h>

void main() {
   double valorOriginal, taxaJuros, valorPagamento;
   int diasAtraso;

   printf("Digite o valor orginal da parcela: ");
   scanf("%lf", &valorOriginal);

   printf("Digite a quantidade de dias em atraso: ");
   scanf("%d", &diasAtraso);
   taxaJuros = 0.005;

   valorPagamento = valorOriginal + (valorOriginal * taxaJuros * diasAtraso);

   printf("O valor a pagar com juros e %.1lf", valorPagamento);
}