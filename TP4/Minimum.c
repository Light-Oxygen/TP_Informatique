#include <stdio.h>

signed short Saisie_hd(void); /* Prototypage de la fonction Saisie_Hd, récupérant un nombre entier */
signed short Minimum(signed short Val1, signed short Val2); /* Prototypage de la fonction Minimum, déterminant la valeur la plus petite entre deux nombres */

int main()
{

    /* Définition des trois valeurs numériques utilisées dans le main, Val1 et Val2 qui sont récupérées en entrée pour être comparées */
    signed short Val1, Val2;

    Val1 = Saisie_hd(); /* Récupération de Val1 avec la fonction définie Saisie_Hd() */

    Val2 = Saisie_hd(); /* Récupération de Val2 avec la fonction définie Saisie_Hd() */

    printf("Minimum : %hd\n", Minimum(Val1, Val2)); /* Retourne la valeur minimale */ 
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

signed short Minimum (signed short Val1, signed short Val2)
{
   signed short _Minimum;
   
   if (Val1 < Val2) /* Retour de la valeur la plus petite */
   {
     _Minimum = Val1;
   }
   else
   {
     _Minimum = Val2;
   }
  
   return _Minimum;
}
