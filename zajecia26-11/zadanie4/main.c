#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int wynik=fibonacci(3);

    printf("%d",wynik);
    printf("\n");
    return 0;
}


int fibonacci(int n)
{
    int x;
    if(n==1)
    {
        return 0;
    }
    else if((n==2)||(n==3))
    {
        return 1;
    }
    else if(n>3)
    {
        x=fibonacci(n-1)+fibonacci(n-2);
        return x;
    }
}
