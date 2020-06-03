#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pokemon
{
    char name[100];
    int level;
} Pokemon;

void PrintPokemon(Pokemon);
Pokemon Hybrid(Pokemon, Pokemon);
double levelup(int);
void plevelup(Pokemon *);

int main()
{
    Pokemon Pikachu1 = {.name = "Pikachu", .level = 5};

    Pokemon Charizard = {"Charizard", 40};
    Charizard.level = 90;

    Pokemon Pikachu2 = Pikachu1;
    Pikachu2.level = 9;
    //strcpy(Pikachu2.name,"Pikapi");

    PrintPokemon(Pikachu1);
    PrintPokemon(Pikachu2);
    PrintPokemon(Charizard);

    Pokemon Pika = Hybrid(Pikachu1, Pikachu2);
    Pokemon *Pikap = &Pika;
    (*Pikap).level = 2;

    PrintPokemon(Pika);

    int n,l;
    printf("How many Pikachu clones do you want?, Enter number and level:\n");
    scanf("%d %d",&n, &l);

    Pokemon * Pikalist = (Pokemon*)malloc(n * sizeof(Pokemon));
    //Pokemon Pikalist[n];

    for(int i = 0; i < n; i++)
    {
        Pikalist[i] = Pikachu1;
        Pikalist[i].level = l;
    }

    Pokemon * Clonep = Pikalist;

    //(Clonep+3)->level = levelup((Clonep+3)->level);
    (Clonep+1) -> level = 9;
    plevelup(Clonep+0);

    for(int i = 0; i < n; i++)
    {
        PrintPokemon(Pikalist[i]);
    }

}

Pokemon Hybrid(Pokemon a, Pokemon b)
{
    Pokemon c;
    strcat(c.name, a.name);
    strcat(c.name, b.name);
    c.level = (a.level + b.level)/2;
    return c;
}

double levelup(int a)
{
    a++;
    return a;
}

void plevelup(Pokemon *a)
{
    a->level++;
}
void PrintPokemon(Pokemon a)
{
    printf("Name = %s\nLevel = %d\n", a.name, a.level);
}
