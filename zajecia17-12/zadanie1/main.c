#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
WEJŚCIE: Tablica TAB[1..N], element n
WYJŚCIE: True jeśli n znajduje się w TAB, False w przeciwnym przypadku

index = 1
wynik = False
Dopóki index <= N wykonuj:
   Jeśli TAB[index] == n to:
      wynik = True
   index = index + 1
Wypisz wynik
*/


int main()
{
    int tab[10];

    for(int i=1;i<=10;i++)
    {
        tab[i-1]=i;
    }
    bool wynik;

    wynik=false;
    int n=15;

    for(int i=1;i<=10;i++)
    {
        if(tab[i-1]==n)
        {
            wynik=true;
        }

    }
    printf("%d\n",wynik);

    return 0;
}
