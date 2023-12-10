#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    int *wskaznik;
    for(int i=0;i<10;i++)
    {
        printf("podaj %d",i);
        printf("element tablicy: \n");
        wskaznik=&tab[i];
        scanf("%d",wskaznik);
    }

    printf("kolejne elementy podanej tablicy: ");
    for(int i=0;i<10;i++)
    {
        wskaznik=&tab[i];
        printf(", %d", *wskaznik);
    }
    return 0;
}
