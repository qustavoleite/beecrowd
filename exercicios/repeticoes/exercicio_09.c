#include <stdio.h>

int main (){
    int n, soma = 0, i=1;
    scanf("%d", &n);

    while(i <= n){
        if(i%5==0){
            soma += i;
        }
        i++;
    }

    printf("%d ", soma);
    return 0;
}