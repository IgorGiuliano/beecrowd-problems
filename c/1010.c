#include <stdio.h>
 
int main() {
    float valor1, valor2, total;
    int p1, p2, qp1, qp2;
    scanf("%d %d %f", &p1, &qp1, &valor1);
    scanf("%d %d %f", &p2, &qp2, &valor2);
    total = (qp1 * valor1) + (qp2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}