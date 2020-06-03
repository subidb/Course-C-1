#include <stdio.h>


#define LARGEST(a,b,c) ((a > b && a > c)? a: (b > a && b > c)?b : c)
#define SMALLEST(a,b,c) ((a < b && a < c)? a: (b < a && b < c)?b : c)

#define MIDRANGE(a,b) ( (double)(a+b)/2)

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int L = LARGEST(a,b,c);
    int S = SMALLEST(a,b,c);
    double m = MIDRANGE(L,S);
    printf("midrange = %g", m);
}
