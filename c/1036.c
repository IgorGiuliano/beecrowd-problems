#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c, delta, xa,xb;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        printf("Impossivel calcular\n");
    }else{
        delta = (b * b) - (4 * a * c);
        if(delta<0){
            printf("Impossivel calcular\n");
        }else{
            xa= ( -b + sqrt(delta) ) / (2 * a);
            xb= ( -b - sqrt(delta) ) / (2 * a);
            printf("R1 = %.5f\n", xa);
            printf("R2 = %.5f\n", xb);
        }
    }
    return 0;
}