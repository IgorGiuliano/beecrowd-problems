#include <stdio.h>
 
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((a < b) && (b < c)) {
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
    } else if((b < a) && (a < c)) {
        printf("%d\n",b);
        printf("%d\n",a);
        printf("%d\n",c);
    } else if((c < a) && (a < b)){
        printf("%d\n",c);
        printf("%d\n",a);
        printf("%d\n",b);
    } else if((a < c) && (c < b)){
        printf("%d\n",a);
        printf("%d\n",c);
        printf("%d\n",b);
    } else if((b < c) && (c < a)){
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",a);
    } else if((c < b) && (b < a)){
        printf("%d\n",c);
        printf("%d\n",b);
        printf("%d\n",a);
    }
    printf("\n%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}