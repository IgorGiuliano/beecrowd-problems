#include <stdio.h>
 
int main() {
    int X, Y;
    float total;
    scanf("%d %d", &X, &Y);
    total = (X * Y) / 12.0;
    printf("%.3f\n",total);
    return 0;
}