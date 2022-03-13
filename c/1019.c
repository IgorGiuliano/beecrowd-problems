#include <stdio.h>
 
int main() {
    int N, horas, minutos, aux;
    scanf("%d",&N);
    aux = N;
    horas = aux / 3600;
    aux = aux - (horas * 3600);
    minutos = aux / 60;
    aux = aux - (minutos * 60);
    printf("%d:%d:%d\n", horas, minutos, aux);
    return 0;
}