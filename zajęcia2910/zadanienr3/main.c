#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Podaj 1 liczbe: \n");
    scanf("%d",&x);
    printf("Podaj 2 liczbe: \n");
    scanf("%d",&y);
    if(x>y)
    {
    printf("Liczba: %d",x);
    printf("jest większa niż %d",y);
    }
    else if(x<y)
    {
    printf("Liczba: %d",x);
    printf("jest mniejsza niż %d",y);
    }
    else if("%d",x == y)
    {
    printf("Liczba: %d",x);
    printf("jest równa liczbie %d",y);
    }
    return 0;
}
