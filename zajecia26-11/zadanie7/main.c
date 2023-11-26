#include <stdio.h>
#include <stdlib.h>

int sprawdz(int x,int i);

int main()
{
    sprawdz(9,1);
    return 0;
}

int sprawdz(int x,int i)
{
    int tab[10]={0,1,2,3,4,5,6,7,8,9};
    if(i<10)
    {
        if(x==tab[i])
        {
            printf("podana liczba znajduje sie w tablicy \n");
        }
        else
        {
            sprawdz(x,i+1);
        }
    }
    else
    {
        printf("podana liczba nie znajduje sie w tablicy \n");
    }
}

