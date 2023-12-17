#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/*
WEJŚCIE: Posortowana tablica TAB[1..N], element n
WYJŚCIE: True jeśli n znajduje się w TAB, False w przeciwnym przypadku

left = 1
right = N
result = False
Dopóki left <= right:
  middle := floor((left + right) / 2)
  if Tab[middle] < n:
    left := middle + 1
  else if Tab[middle] > n:
    right := middle - 1
  else:
    result = True
Wypisz result

*/
int main()
{
    int tab[10];
    for(int i=0;i<10;i++)
    {
        tab[i]=i;
    }


    bool wynik;
    wynik=false;
    int n=8;
    int left=1;
    int right=10;
    double middle;
    middle=floor((left+right)/2);
    int y=middle;
    while(left<=right)
    {

        middle=floor((left+right)/2);

        int y=middle;

        if(tab[y]<n)
            {
                left=y+1;
            }
        if(tab[y]>n)
            {
                right=y-1;
            }
        else
            {
                wynik=true;
                break;
            }
    }

    printf("%d\n",wynik);
    return 0;
}
