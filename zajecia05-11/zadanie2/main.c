#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int wynik;
    printf("Podaj liczbe a:\n");
    scanf("%d", &a);
    printf("Podaj liczbe b:\n");
    scanf("%d", &b);
    wynik=a;
    for(int i=1;i<b;i++)
    {
    wynik=wynik*a;
    }

    printf("%d",wynik);
    printf("\n");
    return 0;
}
