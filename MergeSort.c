// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int A[], int size);

int main()
{
    int arr[] = {12, 11, 13, 5, 6};//, 7, 20, 2, 9, 21, 23, 90 ,109, 1, 55};
    int num = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, num);

    mergeSort(arr, 0, num - 1);

    printf("\nSorted array is \n");
    printArray(arr, num);
    return 0;
}

void mergeSort(int *arr, int l, int h)
{
    if (l < h)
    {
        // Same as (l+h)/2, but avoids overflow for
        // large l and h
        //int m = l+(h-l)/2;
        int m = (l+h)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        //printf("1  BR\n");

        mergeSort(arr, m+1, h);
        //printf("2  BR\n");

        merge(arr, l, m, h);


    }
}

void merge(int arr[], int l, int m, int h)
{
    printf("3  BR\n");
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  h - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */


/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver program to test above functions */

