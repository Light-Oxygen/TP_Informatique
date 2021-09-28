#include <stdio.h>
#include <stdlib.h>

unsigned short ValeurAbs (signed short x); /* Prototypage de la fonction ValeurAbs, calculant la valeur absolue de la valeur x indiquée */
signed short Saisie_hd(void); /* Prototypage de la fonction Saisie_Hd, récupérant un nombre entier */

int main()
{

    /* Définition des trois valeurs numériques utilisées dans le main, Val1 et Val2 qui sont récupérées en entrée et Diff, la différence entre Val1 et Val2*/
    signed short Val1, Val2, Diff;
    unsigned short AbsVal1, AbsVal2; /* Définition des variables stockant les valeurs absolues */

    Val1 = Saisie_hd(); /* Récupération de Val1 avec la fonction définie Saisie_Hd() */

    Val2 = Saisie_hd(); /* Récupération de Val2 avec la fonction définie Saisie_Hd() */
    
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
