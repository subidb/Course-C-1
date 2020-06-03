#include <stdio.h>
# define ROW 2
# define COL 3

int main ()
{
    int arr [ ROW ][ COL ] = { {9 , 2 , 3} , {4 , 5 , 6} };
    //int i = 1;
    //int j = 2;
    int * p = ( int *) arr ; // needs explicit cast

    printf("%p\n",arr);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf (" Address of [1][2]: %p\n", &arr[1][2]) ;
    printf (" Address of [1][2]: %p\n", p + (1 * COL + 2) );
    //printf (" Address of [1][2]: %d\n", *(*( arr + (1 * COL + 2) )));

    printf (" Value of [1][2]: %d\n", arr [1][2]) ;
    printf (" Value of [1][1]: %d\n", *( p + (1 * COL + 1) ));
    printf (" Value of [0][1]: %d\n", *( p + (0 * COL + 1) ));

    printf ("\n") ;
    printf (" Address of [0][0]: %p\n", p + (0 * COL + 0) );
    printf (" Value of [0][0]: %d\n", *(p + (0 * COL + 0)) );

    printf (" Address of [0][1]: %p\n", p + (0 * COL + 1) );
    printf (" Address of [0][2]: %p\n", p + (0 * COL + 2) );
    printf (" Address of [1][0]: %p\n", p + (1 * COL + 0) );
    printf (" Address of [1][1]: %p\n", p + (1 * COL + 1) );
    printf (" Address of [1][2]: %p\n", p + (1 * COL + 2) );
    return 0;
}
