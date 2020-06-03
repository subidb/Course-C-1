#include <stdio.h>
#include <stdlib.h>

int asc(const void * , const void * );
int des(const void * , const void * );

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);


    int * array = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }


    int (*fp)(const void*, const void*);


    char c;
    while(1)
    {
        scanf(" %c",&c);
        if(c == 'a')
        {
            fp = asc;
        }

        else if(c == 'd')
        {
            fp = des;
        }

        else if(c == 'e')
        exit(1);

        qsort(array, n, sizeof(int), fp);

        for(int i = 0; i<n; i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }



}

int asc(const void * a, const void * b)
{
    int *x = (int*)a;
    int *y = (int*)b;
    return (*x - *y);
}

int des(const void * a, const void * b)
{
    int *x = (int*)a;
    int *y = (int*)b;
    return (*y - *x);
}


// int comparator(const void* p1, const void* p2);
// Return value meaning
// <0 The element pointed by p1 goes before the element pointed by p2
// 0  The element pointed by p1 is equivalent to the element pointed by p2
// >0 The element pointed by p1 goes after the element pointed by p2
