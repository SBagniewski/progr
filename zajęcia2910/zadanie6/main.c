#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Podaj rok: \n");
    scanf("%d", &x);
    if(x%4==0)
    {
    printf("Podany rok jest przestępny \n");
    }
    else
    {
    printf("Podany rok nie jest przestępny \n");
    }
    return 0;
}
