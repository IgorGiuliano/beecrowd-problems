#include <stdio.h>
 
int main() {
    double raio, area, n = 3.14159;
    scanf("%lf", &raio);
    area = n * (raio * raio);
    printf("A=%.4lf\n", area);
    return 0;
}