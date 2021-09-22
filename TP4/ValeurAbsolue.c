#include <stdio.h>
#include <stdlib.h>

unsigned short ValeurAbs (signed short x);

int main()
{
    signed short Val1, Val2, Diff;
    unsigned short AbsVal1, AbsVal2;

    printf("Saisir Val 1 :\n");
    fflush(stdin);
    scanf("%hd", &Val1);
    printf("Saisir Val 2 :\n");
    fflush(stdin);
    scanf("%hd", &Val2);

    AbsVal1 = ValeurAbs(Val1);
    AbsVal2 = ValeurAbs(Val2);

    printf("Abs Val 1 : %hd\n", AbsVal1);
    printf("Abs Val 2 : %hd\n", AbsVal2);

    Diff = AbsVal1 - AbsVal2;

    printf("Abs Diff : %hd\n", ValeurAbs(Diff));
    return 0;
}

unsigned short ValeurAbs(signed short x)
{
    unsigned short Abs; /* Valeur absolue */

    if (x < 0)
    {
        Abs = -x;
    }
    else
    {
        Abs = x;
    }

    return Abs;
}
