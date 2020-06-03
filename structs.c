#include <stdio.h>
#include <stdlib.h>


struct list * push_front(struct list* , int );
struct list * push_back(struct list * , int );
struct list * removenumber(struct list* );
void printlist(struct list*);
void freelist(struct list*);


int main()
{

}

struct list
{
    int info;
    struct list* next;
};

struct list* push_front(struct list* L, int value)
{
    struct list* newlist;
    newlist = (struct list*)malloc(sizeof(struct list));
    if(newlist == NULL)
    {
        printf("error: couldn't allocate memory");
        return L;
    }
    newlist->info = value;
    newlist->next = L;
    return newlist;
};

struct list * push_back(struct list* L, int value)
{
    struct list * cursor;
    struct list * newlist;
    cursor = L;
    newlist = (struct list*)malloc(sizeof(struct list));
    if(newlist == NULL)
    {
        printf("error");
        return L;
    }
    newlist->info = value;
    newlist->next = NULL;

    if(L = NULL)
    {
        return L;
    }
    while(cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    cursor->next = newlist;
    return L;
};

struct list * removenumber(struct list* L)
{
    struct list* newlist;
    newlist = L;
     if(newlist==NULL)
       {
        printf("empty\n");
        return L;
       }
    newlist = (newlist->next);
    free(L);
    return newlist;
};

void freelist(struct list* L)
{
    struct list * nextel;
    while(L != NULL)
    {
        nextel = L->next;
        free(L);
        L = nextel;
    }
}

void printlist(struct list * L)
{
    struct list * p ;
    for(p = n_list ; p ; p = p -> next)
    {
        printf ("%d ", p -> info);
    }
}
