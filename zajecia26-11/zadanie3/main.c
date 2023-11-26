#include <stdio.h>
#include <stdlib.h>

int calkowite(int n);

int main()
{
    calkowite(10);
    printf("\n");
    return 0;
}

int calkowite(int n)
{

    if(n>=1)
    {
        calkowite(n-1);
        printf("%d",n);
        printf(", ");
    }
    else if(n==0)
    {
        return 0;
    }
}
