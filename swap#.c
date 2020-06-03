#include <stdio.h>

#define SWAP(a,b,type) {type temp = a; a = b; b = temp;}

int main()
{
    int a,b;
    double x,y;
    scanf("%d", &a);
    scanf("%d", &b);

    scanf("%lf", &x);
    scanf("%lf", &y);

    SWAP(a,b,int);
    SWAP(x,y,double);

    printf("%d %d\n",a,b);
    printf("%g %g\n",x,y);
}
