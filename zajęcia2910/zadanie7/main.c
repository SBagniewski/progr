#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    int msc;
    int dzn;
    printf("Podaj rok: \n");
    scanf("%d", &rok);
    printf("Podaj miesiac: \n");
    scanf("%d", &msc);
    printf("Podaj dzien: \n");
    scanf("%d", &dzn);
    if((dzn<32&&msc<12)&&(dzn>0&&msc>0))
    {
        if(msc==2)
        {
            if(dzn<29)
            printf("podana data jest prawidłowa \n");
            else
            printf("podana data jest nieprawidłowa \n");
        }
        else
        printf("podana data jest prawidłowa \n");
    }
    else
    {
    printf("podana data jest nieprawidłowa \n");
    }
    printf("podana data: %d", dzn);
    printf(".%d", msc);
    printf(".%d", rok);
    printf("\n");
}
