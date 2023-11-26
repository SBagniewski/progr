#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindorm_check(char slowo[],int x, int y);

int main()
{
    char slowko[]="kajuk";
    if(palindorm_check(slowko,0,strlen(slowko)-1))
    {
        printf("podane slowo jest palindormem \n");
    }
    else if(palindorm_check(slowko,0,strlen(slowko)-1)==0)
    {
        printf("podane slowo nie jest palindormem \n");
    }
    return 0;
}

int palindorm_check(char slowo[],int x, int y)
{
    if(y>=0)
    {
        if(slowo[x]!=slowo[y])
        {
            return 0;

        }
        else
        {
           return palindorm_check(slowo,x+1,y-1);
        }
    }
}
