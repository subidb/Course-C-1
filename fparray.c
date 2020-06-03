#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Upper(char *);
void Lower(char *);
void Swap(char *);
void Quit();


int main()
{

    void (*fp[4])(char *) = {Upper, Lower, Swap, Quit};

    char string[100];
    char p[100];
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';

    int n;
    while(1)
    {
        strcpy(p,string);
        scanf("%d",&n);
        fp[n-1](p);
    }
    //printf("%s",p);
}

void Upper(char* A)
{
    for(int i = 0; A[i] != '\0' ; i++)
    {
        if(A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
          /*diff between upper and lowercase letters
          in ascii is 32*/
        }
    }

    printf("%s\n",A);
}

void Lower (char *A)
{
    for(int i = 0; A[i] != '\0' ; i++)
    {
        if(A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] = A[i] + 32;
        }
    }

    printf("%s\n",A);
}

void Swap (char* A)
{
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
        else if(A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] = A[i] + 32;
        }
    }

    printf("%s\n",A);
}

void Quit()
{
    exit(1);
}
