#include <stdio.h>

int main() {
    int item, quantidade;
    scanf("%d", &item);
    scanf("%d", &quantidade);

    if (item == 1) {
        printf("Total: R$ %.2f\n", 4.00 * quantidade);
    }
    else if (item == 2) {
        printf("Total: R$ %.2f\n", 4.50 * quantidade);
    }
    else if (item == 3) {
        printf("Total: R$ %.2f\n", 5.00 * quantidade);
    }
    else if (item == 4){
        printf("Total: R$ %.2f\n", 2.00 * quantidade);
    }
    else if (item == 5) {
        printf("Total: R$ %.2f\n", 1.50 * quantidade);
    }

    return 0;
}