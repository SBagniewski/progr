#include <stdio.h>
#include <stdlib.h>

int silnia(int n);


int main()
{
    int wynik=silnia(5);
    printf("%d", wynik);
    printf("\n");
    return 0;
}

int silnia(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {

    return n * silnia(n-1);
    }

}
