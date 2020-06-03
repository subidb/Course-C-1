/*
JTSK-320112
a3 p1.c
Subid Basaula
sbasaula@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int info;
    struct list *next;
}Node;

Node * push_front( Node * , int );
Node * push_back ( Node * , int );
Node * removenumber ( Node * );
void printlist( Node * );
void printfunc( Node * , void(*)(int));
void freelist( Node * );
void printnum(int );

int main()
{
    char c;
    int n;
    int v = 0;
    Node * L = NULL;

    void (*fpr)(int);
    fpr = printnum;
    while(v!=1)
    {
        scanf("%c",&c);
        switch(c)
        {
            case 'b':
                scanf("%d", &n);
                L = push_front(L, n);
                break;

            case 'a' :
                scanf("%d",&n);
                L = push_back(L, n);
                break;

             case 'r' :
                getchar();
                L = removenumber(L);
                break;

            case 'p' :
                printfunc(L,(fpr));
                printf("\n");
                break;

            case 'q' :
                freelist(L);
                v = 1;
                break;

        }
        if(v==1)
            break;
    }

}


Node * push_front(Node * L , int value )
{
    Node * newn;
    newn = ( Node *)malloc(sizeof(Node));
    if (newn == NULL)
    {
        printf ("Error\n");
        return L;
    }
    newn ->info = value;
    newn ->next = L;
    return newn ;
}

Node * push_back ( Node * L , int value )
{
    Node * cursor , * newn ;
    cursor = L ;
    newn = ( Node *) malloc( sizeof( Node));
    if ( newn == NULL )
    {
        printf (" Error allocating memory \n");
        return L ;
    }
    newn -> info = value ;
    newn -> next = NULL ;
    if ( L == NULL )
        return newn ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next;
    cursor -> next = newn;
    return L ;
}

Node * removenumber( Node * L)
{
    Node * p;
    p = L;

    if(p==NULL)
       {
        return L;
        printf("empty\n");
       }
    p = p->next;
    free(L);
    return p;

};

void printlist(Node * L)
{
    Node * p ;
    for(p = L ; p ; p = p -> next)
    {
        printf ("%d ", p -> info) ;
    }
}


void printnum(int a)
{
    printf("%d ",a);
}

void printfunc(Node *L, void(*fp)(int))
{
    //printf("x\n");
    Node *p = L;
    for(;p !=NULL ; p = p->next)
    {
        fp(p->info);
    }
}

void freelist( Node * L )
{
    printf("freeing\n");
    Node * nextn;
    while(L != NULL)
    {
        nextn = L->next;
        free(L);
        L = nextn;
    }
}
