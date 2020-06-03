#include <stdio.h>
#include <stdlib.h>


void Scan(int ***, int, int , int);
void Print(int ***, int, int, int);
void PrintS(int ***, int, int, int);

int main()
{
    int r,c,d;

    scanf("%d %d %d", &r,&c,&d);
    int ***arr = (int***)malloc(r * sizeof(int**));
    if (arr == NULL )
    {
        exit (1);
    }
    for(int i = 0; i < r; i++)
    {
        arr[i] = (int**)malloc(c * sizeof(int*));
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            arr[i][j] = (int*)malloc(d * sizeof(int));
        }
    }
    printf("%d rows %d columns %d depth containers allocated\n Enter the values: \n", r, c, d);

    Scan(arr,r,c,d);
    Print(arr,r,c,d);
    printf("\n");
    PrintS(arr,r,c,d);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            free(arr[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        free(arr[i]);
    }

    free(arr);

}

void Scan(int *** A, int r, int c, int d)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            for(int k = 0; k < d; k++)
            {
                scanf("%d", &A[i][j][k]);
            }
        }
    }
}

void Print(int *** A, int r, int c, int d)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            for(int k = 0; k < d; k++)
            {
                printf("%d ", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void PrintS(int *** A, int r, int c, int d)
{
    for(int k = 0; k < d; k++)
        {
        printf("Section %d:\n",k+1);
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                {
                    printf("%d ",A[i][j][k]);
                    //printing the 2d sections
                    //parallel to the XOY axis
                }
            }
            printf("\n");
        }
    }
}
