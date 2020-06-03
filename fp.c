#include <stdio.h>
#include <stdlib.h>

void a ( void );
void printsquare(int a);
double sum(double a, int b);
void printcube(int a);

int main()
{

    // void (*fvoid)(void);
    // fvoid = a;
    // fvoid();
    void (*fpow)(int);
    fpow = &printsquare;

    fpow(5);

    fpow = printcube;
    fpow(5);

    double (*fpsum)(double, int);
    fpsum = sum;

    double sum = fpsum(3,12);
    printf("%g\n",sum);

    void (*fp[2])(int);
    fp[0] = printsquare;
    fp[1] = printcube;

    fp[0](9);
    fp[1](9);

}

void printsquare(int a)
{
    printf("%d\n", a*a);
}

void printcube(int a)
{
    printf("%d\n", a*a*a);
}

double sum(double a, int b)
{
    printf("sum = ");
    return (a+b);
}

void a ( void )
{
  printf (" func a\n");
}
