#include <stdio.h>
#include <stdlib.h>

void ScanMatrix(int ** , int , int );
int ** ScanMatrixV(int ** , int , int );
void PrintMatrix(int ** , int ,  int );
void Multiply(int** , int **,int **, int , int , int );
void Deallocate(int **, int , int);

int main()
{
    int n,m,p;
    printf("Enter the dimensions:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);

    printf("So the matrices are A = %d * %d and B = %d * %d\n\n",n,m,m,p);

    int **A = (int**)malloc(n * sizeof(int*));
    int **B = (int**)malloc(m * sizeof(int*));

    printf("Enter the components of matrix A:\n");
    ScanMatrix(A,n,m);

    printf("\nEnter the components of matrix B:\n");
    B = ScanMatrixV(B,m,p);

    printf("matrix A:\n");

    PrintMatrix(A,n,m);

    printf("matrix B:\n");
    PrintMatrix(B,m,p);

    int **P = (int**)malloc(n * sizeof(int*));
    Multiply(A,B,P,n,m,p);
    printf("Result of multiplication:\n");
    PrintMatrix(P,n,p);

    Deallocate(A,n,m);
    Deallocate(B,m,p);
    Deallocate(P,n,p);

}

void ScanMatrix(int ** M, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        M[i] = (int*)malloc(m * sizeof(int));
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
}

int ** ScanMatrixV(int ** M, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        M[i] = (int*)malloc(m * sizeof(int));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    return M;
}

void Multiply(int** M1, int **M2,int **P, int n, int m, int p)
{
    for(int i = 0; i<m; i++)
    {
        P[i] = (int*)malloc(p*sizeof(int));
    }
    int sum=0;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            for(int k = 0; k < m; k++)
            {
                sum = sum + M1[i][k]*M2[k][j];
            } //calculating each element of the matrix

        P[i][j] = sum;
        sum = 0;
        }
    }

   //return **P;
}

void PrintMatrix(int ** M, int n,  int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}

void Deallocate(int **M, int n, int m)
{
    for(int i = 0; i<n; i++)
    {
        free(M[i]);
    }
    free(M);
}
