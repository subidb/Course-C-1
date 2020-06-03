#include <stdio.h>
#include <stdlib.h>

//#define IM

int main()
{
    int d;
    int dotp=0;
    scanf("%d",&d);
    int * vec1 = (int*)malloc(sizeof(int)*d);
    int * vec2 = (int*)malloc(sizeof(int)*d);
    for(int i = 0; i<d; i++)
    {
        scanf("%d", &vec1[i]);
    }
    for(int i = 0; i<d; i++)
    {
        scanf("%d", &vec2[i]);
    }
    printf("\n\n");
    for(int i = 0; i<d; i++)
    {
        int a = vec1[i]*vec2[i];
        #ifdef IM
        printf("\n%d\n",a);
        #endif
        dotp = dotp + a;
    }
    printf("dot product = %d\n", dotp);
}
