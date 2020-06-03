#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car
{
    char name[100];
    double speed;
    double eng;
} Car;

double performance(double , double);
Car Hybrid(Car a, Car b);

int main()
{
    Car a = {"Porche" , 200.5};
    a.speed = 400;
    a.eng = 10;

    Car c;

    double aspeed = a.speed;

    Car b = {"Audi", .eng = 9, .speed = 195};

    c = a;

    strcpy(c.name,"BMW");

    printf("%s\n", a.name);
    printf("speed = %g\n", aspeed);
    printf("engine = %g\n", a.eng);

    printf("\n");

    printf("%s\n", b.name);
    printf("speed = %g\n", b.speed);
    printf("engine = %g\n\n", b.eng);

    printf("%s\n", c.name);
    printf("speed = %g\n", c.speed);
    printf("engine = %g\n", c.eng);

    printf("performance = %g\n\n", performance(c.speed,c.eng));

    Car h = Hybrid(b,c);

    strcpy(h.name,"Hybrid");

    printf("%s\n", h.name);
    printf("speed = %g\n", h.speed);
    printf("engine = %g\n", h.eng);

    Car *h1 = &h;
    (*h1).eng = 12;

    printf("engine = %p\n", h1);
    printf("engine = %g\n", h1->eng);

    int n;
    printf("\nHow many random Cars do you want?\n");
    scanf("%d",&n);
    Car * list = (Car*)malloc(sizeof(Car)*n);

    for(int i = 0; i<n; i++)
    {
        strcpy(list[i].name, "Random Car");
        list[i].speed = i*100+20;
        list[i].eng = i*2;
    }

    for(int i = 0; i<n; i++)
    {
        printf("\n%s\n", list[i].name);
        printf("speed = %g\n", list[i].speed);
        printf("engine = %g\n", list[i].eng);
    }

    Car* plist = list;
    printf("%g", (plist+3)->speed);

    return 0;
}

double performance(double a, double b)
{
    return a/b;
};

Car Hybrid(Car a, Car b)
{
    Car newcar;

    //strcpy(newcar.name, strcat("x",a.name));

    newcar.speed = (a.speed + b.speed)/2;
    newcar.eng = (a.eng + b.eng)/2;
    return newcar;

}
