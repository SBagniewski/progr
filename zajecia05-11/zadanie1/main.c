#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int wynik;
    int suma;
    printf("Podaj liczbe n:!\n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
    wynik=i*i;
    suma=suma+wynik;
    }
    printf("%d",suma);
    printf("\n");
    return 0;
}
