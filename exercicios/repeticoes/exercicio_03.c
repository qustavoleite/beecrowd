/*Escreva um algoritmo que leia os valores n1 e n2 e imprima o intervalo fechado entre esse dois valores*/

int main () {
    int n1, n2, ax;
    scanf("%d %d", &n1, &n2);

    if(n1 >= n2){
        ax = n1;
        n1 = n2;
        n2 = ax;
    }

    while(n1 <= n2){
        printf("%d ", n1);
        n1++;
    }

    return 0;
}