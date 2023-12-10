#include <stdio.h>
#include <stdlib.h>

int global=10;

int wypisz(int x,int y)
{
    printf("adres pierwszej zmiennej %p\n", &x);
    printf("adres drugiej zmiennej %p\n", &y);

}

int main()
{
    int local=global;

    printf("adres zmiennej globalnej %p\n", &global);
    printf("adres zmiennej lokalnej %p\n", &local);

    wypisz(global,local);

    return 0;
}
