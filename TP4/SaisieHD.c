#include <stdio.h>
#include <stdlib.h>

unsigned short ValeurAbs (signed short x);
signed short Saisie_hd(void);

int main()
{

    signed short Val1, Val2, Diff;
    unsigned short AbsVal1, AbsVal2;

    Val1 = Saisie_hd();

    Val2 = Saisie_hd();
    AbsVal1 = ValeurAbs(Val1);
    AbsVal2 = ValeurAbs(Val2);

    printf("Abs Val 1 : %hd\n", AbsVal1);
    printf("Abs Val 2 : %hd\n", AbsVal2);

    Diff = AbsVal1 - AbsVal2;

    printf("Abs Diff : %hd\n", ValeurAbs(Diff));
    return 0;
}

signed short Saisie_hd()
{
    signed short Entry;
    printf("Saisir un nombre entier :\n");
    fflush(stdin);
    scanf("%hd", &Entry);
    return Entry;
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
