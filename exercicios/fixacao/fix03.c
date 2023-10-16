/*verifique o maior numero entre tres informados, assumindo que os valores sao diferentes entre si.*/

#include <stdio.h>

void main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        printf("o maior numero e: %d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("o maior numero e: %d\n", n2);
    } else {
        printf(" o maior numro e: %d\n", n3);
    }
}