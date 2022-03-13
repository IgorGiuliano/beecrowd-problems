#include <stdio.h>
 
int main() {
 
    double A, B, C, tri, cir, qua, tra, ret;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = (A * C) / 2;
    cir = 3.14159 * (C * C);
    tra = ((A + B) / 2) * C;  
    qua = B * B;
    ret = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);
 
    return 0;
}