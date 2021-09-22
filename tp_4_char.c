#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned short Est_Une_Lettre (char c);

int main()
{
    unsigned short verif;
    char c;
    printf("Saisir une lettre :\n");
    fflush(stdin);
    c=getch();
    verif = Est_Une_Lettre(c);
    if(verif == 1) {
        printf("C'est une lettre");
    } else {
        printf("C'est PAS une lettre");
    }
    return 0;
}

unsigned short Est_Une_Lettre (char c)
{
    unsigned short Result;
    if (c >= 97 && c <= 122) {
        Result = 1;
    }
    else if (c >=65 && c <= 90)
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }

    return Result;

}
