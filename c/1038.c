#include <stdio.h>
 
int main() {
    float cod, qtdItem;
    scanf("%f %f",&cod,&qtdItem);
    if(cod==1) {
        printf("Total: R$ %.2f\n", 4 * qtdItem);
    }else if(cod == 2) {
        printf("Total: R$ %.2f\n", 4.5 * qtdItem);
    }else if(cod == 3) {
        printf("Total: R$ %.2f\n", 5 * qtdItem);
    }else if(cod == 4) {
        printf("Total: R$ %.2f\n", 2 * qtdItem);
    }else {
        printf("Total: R$ %.2f\n", 1.5 * qtdItem);
    }
    return 0;
}