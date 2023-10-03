#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if (a<0)
        a=(-1)*a;
    if (b<0)
        b=(-1)*b;
    printf("%lf\n", (a*a+b*b)/2);
    printf("%lf", (a+b)/2);
    return 0;
}