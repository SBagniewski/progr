#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Podaj 1 liczbe: \n");
    scanf("%d",&x);
    printf("Podaj 2 liczbe: \n");
    scanf("%d",&y);
    printf("Podaj 3 liczbe: \n");
    scanf("%d",&z);

    if((x>y)&&(x>z))
    {
    printf("liczba %d", x);
    printf(", jest największa /n");
    }
    else if((y>z)&&(y>x))
    {
    printf("liczba %d", y);
    printf(", jest największa /n");
    }
    else if((z>x)&&(z>y))
    {
    printf("liczba %d", z);
    printf(", jest największa /n");
    }
    return 0;
}
