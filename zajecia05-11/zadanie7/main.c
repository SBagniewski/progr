#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe n:\n");
    scanf("%d", &n);
    int dziel;
    int x=0;


    for(int i=1;i<=n;i++)
    {
        dziel=n%i;
        if(dziel==0)
        {
            x=x+1;
        }
    }

    if((x==2)||(x==1))
    {
        printf("liczba %d",n);
        printf(" jest liczba pierwsza \n");
    }
    else
    {
        printf("liczba %d",n);
        printf(" nie jest liczba pierwsza \n");
    }
    return 0;
}
