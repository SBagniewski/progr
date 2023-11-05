#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj wielkosc tablicy:\n");
    scanf("%d", &a);
    int tab[a];
    int zwrot[a];
    for (int i=0;i<a;i++)
    {
    printf("wpisz wartosc pola tablicy nr: %d", i);
    printf("\n");
    scanf("%d", &tab[i]);
    }


    for (int i=0;i<a;i++)
    {
    zwrot[i]=tab[i]*tab[i];
    }


    printf("oto podana przez ciebie czesc tablicy i jej kwadrat: \n");
    for(int i=0;i<a;i++)
    {
        printf("%d",tab[i]);
        printf(", ");
        printf("%d",zwrot[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
