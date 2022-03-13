#include <stdio.h>
 
int main() {
    int X;
    float Y, total;
    scanf("%d %f", &X, &Y);
    total = X / Y;
    printf("%.3f km/l\n",total);
    return 0;
}