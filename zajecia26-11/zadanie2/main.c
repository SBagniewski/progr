#include <stdio.h>
#include <stdlib.h>


int euklides(int x, int y);

int main()
{
    int wynik=euklides(134561*10,10);

    printf("%d", wynik);
    printf("\n");
    return 0;
}


int euklides(int x, int y)
{
    int zmienna;
    if(x==y)
    {
        return x;
    }
    else if((x==1)||(y==1))
    {
        return 1;
    }
    else if((x==0)||(y==0))
    {
        return 0;
    }
    else
    {
        if(x%y==0)
        {
            return y;
        }
        else
        {
            if(x>y)
            {
                zmienna=x;
                x=y;
                y=zmienna%x;
                return euklides(x,y);
            }
        }
    }

}
