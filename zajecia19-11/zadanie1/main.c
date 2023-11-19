#include <stdio.h>
#include <stdlib.h>

int dodawanie(int x, int y)
{
    return x+y;
};
int odejmowanie(int x, int y)
{
    return (x-y);
};
int mnozenie(int x, int y)
{
    return x*y;
};
int dzielenie(int x, int y)
{
    return x/y;
};



int main()
{
    int x;
    int y;
    int dzialanie;
    printf("Podaj liczbe 1: \n");
    scanf("%d", &x);
    printf("Podaj liczbe 2: \n");
    scanf("%d", &y);

    printf("Wybierz dzialanie: \n");
    printf("1 - dodawanie\n");
    printf("2 - odejmowanie\n");
    printf("3 - mnozenie\n");
    printf("4 - dzielenie\n");
    scanf("%d", &dzialanie);

    switch(dzialanie)
    {
        case 1:

        printf("%d" ,dodawanie(x,y));
        break;
        case 2:

        printf("%d" ,odejmowanie(x,y));
        break;
        case 3:

        printf("%d" ,mnozenie(x,y));
        break;
        case 4:

        printf("%d" ,dzielenie(x,y));
        break;
    }
    printf("\n");
    return 0;
}
