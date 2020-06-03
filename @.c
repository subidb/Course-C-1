#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d",&n);
    scanf(" %c",&c);

    printf("\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = -1; j < i; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = n; i > 0; i--)
    {
        int j = i;
        for(; j > 0; j--)
        {
            printf("%c", c);
        }
        printf("\n");

    }

    printf("\n");
    int i = n;
    for(; i > 0; i--)
    {
        int j = i;
        for(; j > 0; j--)
        {
            printf("%c", c);
        }
        printf("\n");
        for(int k = n+1; k>i; k--)
        printf(" ");
    }
}
