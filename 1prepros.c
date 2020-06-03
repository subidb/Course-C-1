#include <stdio.h>

#define SIZE 3

#define HIGHER2(A,B) (A>B ? A:B)
#define HIGHER3(A,B,C) (A>B && A>C ? A : B>A && B>C ?B : C)
#define DPRINT(expr) printf(#expr " = %g\n", expr)

int main()
{
    int arr[SIZE] = {1,2,3};

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }

    int h2,h3;
    h2 = HIGHER2(2,5);

    //#undef HIGHER3
    #ifdef HIGHER3
    h3 = HIGHER3(7,21,5);
    #endif

    printf("\n%d is larger\n", h2);
    printf("\n%d is larger\n", h3);
    DPRINT(21.0/9.0);
}
