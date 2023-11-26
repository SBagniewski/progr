#include <stdio.h>
#include <stdlib.h>

int binar(int x);

int main()
{
    binar(15);
    printf("\n");
    return 0;
}

int binar(int x)
{
    int s;
    if(x!=0)
    {
        binar(x/2);
        s=x%2;
        printf("%d",s);
    }
    return 0;
}
