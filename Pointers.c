#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int array [] = {7 , 9, 14, 12, 6};
    int * ptr1 , * ptr2 ;
    int n1 , n2;

    ptr1 = array; // & array [3] is pointer to 4th elem
    ptr2 = &array[1]; // array is pointer to first elem

    n1 = array [4]; // array [4] is value
    n2 = * ptr2 ;

    printf("%d",*(array+1));

    int min = array[0];
    for(int i =0; i<5; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("\n%d\n",min);

    printf ("ptr1 : %p ptr2 : %p\n", ptr1 , ptr2 );
    printf ("ptr1value : %d ptr2value : %d\n", *ptr1 , *ptr2 );
    printf ("n1: %d, n2: %d\n", n1 , n2 );


}
