/*quando um certo comerciante compa um produto ele vende o mesmo com um lucro de 50% se o valor da compra for menor que $50,00; caso contrário , o lucro será de 40%. Crie um progrma que ajude esse comerciante a calcular o valor de venda.*/

#include <stdio.h>

void main () {
   float vrCompra, vrLucro, vrVenda;
   printf("Informe o valor de compra: ");
   scanf("%f", &vrCompra);

   if (vrCompra < 50) {
     //vrLucro = vrCompra * 50/100
     vrLucro = vrCompra * 0.5;
   } else {
     vrLucro = vrCompra * 0.4;
   }

   vrVenda = vrCompra + vrLucro;
   printf("Valor da venda: %f", vrVenda);
}