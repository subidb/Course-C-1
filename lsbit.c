#include <stdio.h>


#define LSBIT(A) (A & 1? 1:0)

int main ()
{
    unsigned char c;
    scanf("%c", &c);
    printf("decimal representation = %d\n", c);
    printf("least significant bit = %d\n", LSBIT(c));
}
