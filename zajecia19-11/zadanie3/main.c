#include <stdio.h>
#include <stdlib.h>

int znak(int i, char s[20])
{
    printf("podaj ktory znak: ");
    scanf("%d", &i);
    printf("napisz cos: ");
    scanf("%s", s);

    return s[i];
};

int main()
{
    int i;
    char s[20];
    printf("%c",znak(i,s));
    printf("\n");


    return 0;
}
