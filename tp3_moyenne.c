/* Importation des deux librairies (par défaut) */
#include <stdio.h> 
#include <stdlib.h>

/* Fonction main, nécessaire au fonctionnement. Retour de type int (convention) */
int main()
{
    signed short Note; /* Déclaration d'une variable utilisée, Note, de type S16 */ 
    printf("Saisir une note sur 20 :\n> ");  /* Demander la note */
    fflush(stdin); /* Vider la mémoire de saisie */
    scanf("%hd", &Note);

    if(Note > 20 || Note < 0) 
    {
        printf("Erreur de saisie\n");
        return 136;
    }

    if(Note >= 10) 
    {
        printf("Vous avez la moyenne, gg wp\n");
    } 
    else 
    {
        printf("Vous avez pas la moyenne, cheh\n");
    }
    return 0;
}
