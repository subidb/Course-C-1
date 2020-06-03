#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    //float arr[n];

    float * arr = (float*)malloc(sizeof(float) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    float * p = arr;

    printf("%d\n",(int)(p-arr));
    for(int i = 0; i < n; i++)
    {
        if(*p >= 0)
        p++;
    }

    printf("%d elements before the 1st negative\n", (int)(p - arr));
}
