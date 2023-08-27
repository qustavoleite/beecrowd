#include <stdio.h>

int main() {
  char nVendedor[20];
  double sFixo, tVendas;

  scanf("%s", &nVendedor);
  scanf("%lf %lf", &sFixo, &tVendas);
  printf("TOTAL = R$ %.2f\n", (sFixo + tVendas * 0.15));

  return 0;
}

// #include <stdio.h>

// int main() {
//     char nVendedor[20];
//     double sFixo, tVendas, total;

//     scanf("%s %lf %lf", nVendedor, &sFixo, &tVendas);
//     total = sFixo + tVendas * 0.15;
//     printf("TOTAL = R$ %.2lf", total);

//     return 0;
// }