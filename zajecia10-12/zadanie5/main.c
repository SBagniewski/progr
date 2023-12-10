#include <stdio.h>
#include <stdlib.h>

int sort(int *liczba1, int *liczba2, int *liczba3)
{
    if((liczba1>liczba2)&&(liczba1>liczba3))
    {
        if(liczba2>liczba3)
        {
            return *liczba1,*liczba2,*liczba3;
        }
        else
        {
            return *liczba1,*liczba3,*liczba2;
        }
    }
    else if((liczba2>liczba1)&&(liczba2>liczba3))
    {
        if(liczba1>liczba3)
        {
            return *liczba2,*liczba1,*liczba3;
        }
        else
        {
            return *liczba2,*liczba3,*liczba1;
        }
    }
    else
    {
        if(liczba1>liczba2)
        {
            printf("%d",*liczba3);
            printf("%d,",*liczba1);
            printf("%d,",*liczba2);
            return *liczba3,*liczba1,*liczba2;
        }
        else
        {
            return *liczba3,*liczba2,*liczba1;
        }
    }

}

int main()
{
    int a=8;
    int b=5;
    int c=10;

    int *liczba1=&a;
    int *liczba2=&b;
    int *liczba3=&c;

    sort(liczba1,liczba2,liczba3);
    return 0;
}
