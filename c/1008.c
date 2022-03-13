#include <stdio.h>
 
int main() {
    int num, horaTrab;
    float valorHr, salario;
    scanf("%d %d %f", &num, &horaTrab, &valorHr);
    salario = horaTrab * valorHr;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num ,salario);
    return 0;
}