#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Wpisz 1 liczbę:\n");
    scanf("%d", &x);
    printf("Wpisz 2 liczbę:\n");
    scanf("%d", &y);
    printf("Dodawanie: %d",x+y);
    printf(", Odejmowanie: %d",x-y);
    printf(", Mnozenie: %d",x*y);
    printf(", Dzielenie: %d",x/y);
    printf(", Modulo: %d",x%y);
    return 0;
}
