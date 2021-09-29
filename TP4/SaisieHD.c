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
    
    AbsVal1 = ValeurAbs(Val1); /* Calcul de la valeur absolue de la variable Val1 */ 
    AbsVal2 = ValeurAbs(Val2); /* Calcul de la valeur absolue de la variable Val2 */ 

    printf("Abs Val 1 : %hd\n", AbsVal1); /* Affiche la valeur absolue de la variable Val1 */ 
    printf("Abs Val 2 : %hd\n", AbsVal2); /* Affiche la valeur absolue de la variable Val2 */ 

    Diff = AbsVal1 - AbsVal2; /* Calcul de la différence entre les deux valeurs absolues */ 

    printf("Abs Diff : %hd\n", ValeurAbs(Diff)); /* Retourne la valeur absolue de la différence */ 
    return 0;
}

signed short Saisie_hd()
{
    signed short Entry; /* Variable interne à la fonction, l'entrée saisie par l'utilisateur */ 
    printf("Saisir un nombre entier :\n"); 
    fflush(stdin); /* Nettoyage du Buffer */ 
    scanf("%hd", &Entry); /* Saisie utilisateur du nombre entier demandé */ 
    return Entry; /* Sortie de la fonction, valeur saisie par l'utilisateur */ 
}

unsigned short ValeurAbs(signed short x)
{
    unsigned short Abs; /* Valeur absolue */

    if (x < 0) /* Calcul de la valeur absolue : Si x<0 alors il faut faire -x pour l'obtenir, sinon retourner la valeur x */ 
    {
        Abs = -x;
    }
    else
    {
        Abs = x;
    }

    return Abs;
}
