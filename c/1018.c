#include <stdio.h>
 
int main() {
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &valor);
    int aux = valor;
    cem = aux / 100;
    aux = aux - (100 * cem);
    cinquenta = aux / 50;
    aux = aux - (50 * cinquenta);
    vinte = aux / 20;
    aux = aux - (20 * vinte);
    dez = aux / 10;
    aux = aux - (10 * dez);
    cinco = aux / 5;
    aux = aux - (5 * cinco);
    dois = aux / 2;
    aux = aux - (2 * dois);
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);  
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", aux);
    return 0;
}