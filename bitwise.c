#include <stdio.h>
int main ()
{
    int i1 , i2 ;
    i1 = 1;
    i2 = 7;
    if (( i1 != 0) && ( i2 != 0) )
    printf ("1: Both are not zero !\n") ;
    if (i1 && i2)
    printf ("2: They exist lmao !\n") ;
     // wrong check
    if (i1 & i2) // at least 1 bit should match the "and" condition
    printf ("3: One bit is set(true) !\n") ;

    if ( (i1 & i2) == i2 )
    printf ("4: All bits are set(true) !\n") ;

    int x = 47;
    int y = x & 229; //compares x & a number in binary, bit by bit using and operator and
    //stores 1 where and condition is matched and 0 where it is not matched

    printf("\n%d & %d = %d\n\n",x, 229, y);

    unsigned int a = 437;
    unsigned int b = 69;

    unsigned int c = a ^ b;
    int d = a&=b;
     //exclusive or
    printf("%d ^(XOR) %d = %d\n\n",a,b,c);
    printf("%d &= %d = %d\n\n",a,b,d);

    int p = 21;
    int q = 5;
    int r = p | q;
    printf("%d | %d = %d\n\n",p,q,r);

    int q2 = q << 3;
    printf("%d << 3 = %d",q,q2);

    int f = 47;
    int g = 2;
    int v = f >> g;
    printf("\n%d >> %d = %d",f,g,v);

    return 0;
}
