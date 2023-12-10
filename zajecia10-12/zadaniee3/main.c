#include <stdio.h>
#include <stdlib.h>


void zamiana(int *liczba1,int *liczba2)
{
    int zamiennik=*liczba1;

    *liczba1=*liczba2;
    *liczba2=zamiennik;

}


int main()
{

    int x=10;
    int z=5;

    int *liczba1=&x;
    int *liczba2=&z;

    printf("liczba pierwsza %d\n",*liczba1);
    printf("liczba druga %d\n",*liczba2);

    zamiana(liczba1,liczba2);


    printf("liczba pierwsza %d\n",*liczba1);
    printf("liczba druga %d\n",*liczba2);

    return 0;
}
