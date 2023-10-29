#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Podaj kod ASCII: \n");
    scanf("%d", &x);
    if((x>64&&x<91)||(x>96&&x<123))
    {
    printf("Podany kod jest literą w tablicy ASCII \n");
    }
    else
    {
    printf("Podany kod nie jest literą w tablicy ASCII \n");
    }
    return 0;
}
