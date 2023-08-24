#include <stdio.h>

void main () {
   float vrCompra, vrLucro, vrVenda;
   printf("Informe o valor de compra: ");
   scanf("%f", &vrCompra);

   if (vrCompra < 50) {
        vrLucro = vrCompra * 0.5;
   } else {
        vrLucro = vrCompra * 0.4;
   }

   vrVenda = vrCompra + vrLucro;
   printf("Valor da venda: %f", vrVenda);
}