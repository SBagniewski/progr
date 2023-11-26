#include <stdio.h>
#include <stdlib.h>

int sumka(int n);

int main()
{
    printf("%d", sumka(235));
    printf("\n");
    return 0;
}


int sumka(int n)
{
    int zlicz=0;
    if(n>0)
    {
        zlicz=zlicz+n%10;
        return zlicz+sumka(n/10);
    }
    else
    {
        return 0;
    }
}
