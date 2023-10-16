#include <stdio.h>

int main () {
    int x, y, i=1, p=1;
    scanf("%d%d", &x, &y);

    while(i<=y){
        p*=x;
        i++;
    }
    printf("%d elevado a %d e igual a %d", x, y, p);
    return 0;
}