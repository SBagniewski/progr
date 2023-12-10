#include <stdio.h>
#include <stdlib.h>

int net(int *wskaznik, int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(wskaznik[i]>max)
        {
            max=wskaznik[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        if(wskaznik[i]==max)
        {
            wskaznik[i]=0;
        }
    }
    return max;
}

int main()
{
    int n=10;
    int tab[10];
    for(int i=0;i<10;i++)
    {
        tab[i]=i;
    }
    int *wskaznik=tab;

    printf("%d",net(wskaznik,n));
    printf("\n");
    return 0;
}
