#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c=0;
    int wynik;
    printf("Podaj liczbe a:\n");
    scanf("%d", &a);
    printf("Podaj liczbe b:\n");
    scanf("%d", &b);

    while(a<b)
    {
    wynik=a;
        for(int i=0;i<c;i++)
        {
            wynik=wynik*a;
        }
        if(wynik>b)
        {
        a=wynik;
        }
    c=c+1;
    }
    printf("%d", c);
    printf("\n");
    return 0;
}
