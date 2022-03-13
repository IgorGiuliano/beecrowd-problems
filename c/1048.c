#include <stdio.h>
 
int main() {
    float salario;
    scanf("%f",&salario);
    if(salario <= 400) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario * 1.15, salario * 0.15);
    } else if((salario > 400) && (salario <= 800)) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salario * 1.12, salario * 0.12);
    } else if((salario > 800) && (salario <= 1200)) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salario * 1.1, salario * 0.1);
    } else if((salario > 1200) && (salario <= 2000)) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salario * 1.07, salario * 0.07);
    } else {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario * 1.04, salario * 0.04);    
    }
    return 0;
}