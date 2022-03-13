#include <stdio.h>
 
int main() {
    char primeiroNome[20];
    double salarioFixo, valorVendas;
    scanf("%s",primeiroNome);
    scanf("%lf %lf", &salarioFixo, &valorVendas);
    double salarioMensal = salarioFixo + (valorVendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salarioMensal);
    return 0;
}