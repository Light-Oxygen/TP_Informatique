
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned short Est_Une_Lettre (char c); /* Prototypage de la fonction Est_Une_Lettre, prenant en paramètre un char. Retour 1 si c'est une lettre et 0 si non */

int main()
{
    unsigned short verif; /* verif = Retour de la fonction Est_Une_Lettre */
    char c; /* Caractère lu */
    printf("Saisir une lettre :\n");
    fflush(stdin); /* Nettoyage du Buffer */
    c=getch(); /* Lecture de l'entrée clavier. Utilisation du getch pour récupérer uniquement un caractère */
    verif = Est_Une_Lettre(c); /* Appel de la fonction Est_Une_Lettre pour faire la vérification */
    if(verif == 1) { /* Le caractère est bien une lettre */ 
        printf("C'est une lettre");
    } else { /* Le caractère n'est pas une lettre */
        printf("C'est PAS une lettre");
    }
    return 0;
}

unsigned short Est_Une_Lettre (char c) /* Fonction permettant de déterminer si le caractère est une lettre ou non (code appartenant aux valeurs numériques) */
{
    unsigned short Result;
    if (c >= 97 && c <= 122) { /* Lettre minuscule : OK */
        Result = 1;
    }
    else if (c >=65 && c <= 90) /* Lettre majuscule : OK */
    {
        Result = 1;
    }
    else  /* Autre type de caractère */
    {
        Result = 0;
    }

    return Result;

}
