#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    printf("The decimal representation is %d\n", c);

    int mask1 = 128;
    int mask2 = 1;
    int n = 0;

    if(c<64)
    {
        n = 6;
    }
    else if(c > 63 && c < 128)
    {
        n = 7;
    }
    else
    {
        n = 8;
    }

    printf("The binary representation is:");
    for(int i = 0; i < 8; i++)
    {
        if(c & mask1)
        printf("1");
        else
        printf("0");
        mask1 = mask1 >> 1;
    }
    mask1 = 128;

    printf("\nThe binary representation is:");
    for(int i = 0; i < 8; i++)
    {
        if(((c & mask1) == mask1))
        printf("1");
        else
        printf("0");
        mask1 = mask1 >> 1;
    }

    printf("\nThe Reverse binary representation is:");
    for(int i = 0; i < n; i++)
    {
        if((c & mask2))
        printf("1");

        else
        printf("0");
        mask2 = mask2 << 1;
    }
}
