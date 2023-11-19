#include <stdio.h>
#include <stdlib.h>

int porownanie(int x, int y)
{
    printf("Podaj liczbe 1: ");
    scanf("%d", &x);
    printf("Podaj liczbe 1: ");
    scanf("%d", &y);

    if(x==y)
    {
        return 1;
    }
    else if(x!=y)
    {
        return 0;
    }
};

int main()
{
    int x;
    int y;
    porownanie(x,y);
    return 0;
}
