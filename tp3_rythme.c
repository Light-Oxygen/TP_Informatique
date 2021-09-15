#include <stdio.h>
#include <stdlib.h>

signed short rHomme(signed short age);

signed short rFemme(signed short age);

signed short rHomme(signed short age)
{
    signed Rythme;
    if (age > 50)
    {
        Rythme = 165;
    }
    else if (age > 10)
    {
        Rythme = 220-(age*11)/10;
    }
    else
    {
        if(age < 0)
        {
            printf("Mission aborted ? Mais sinon, erreur de saisie!");
            Rythme = -1;
        }
        else
        {
            Rythme = 230-2*age;
        }
    }

    return Rythme;
}

signed short rFemme(signed short age)
{
    signed short Rythme;
    if (age > 55)
    {
        Rythme = 165;
    } else if (age > 10)
    {
        Rythme = 220-age;
    }
    else
    {
        if(age < 0) {
            printf("Mission aborted ? Mais sinon, erreur de saisie!");
            Rythme = -1;
        } else
        {
            Rythme = 230-2*age;
        }
    }

    return Rythme;
}


int main()
{
  signed short bpm, age, genre;

    printf("Et voici la question pour un million d'euros... Vous etes un homme (1) ou une femme ? (2)\n> ");
    fflush(stdin);
    scanf("%hd", &genre);

    if (genre == 1) /* Il s'agit d'un homme */
    {
        printf("Quel age avez vous ?\n> ");
        fflush(stdin);
        scanf("%hd", &age);
        bpm = rHomme(age);
        if(bpm != -1) printf("Rythme cardiaque maximal : %hd bpm", bpm);

    } else if (genre == 2) { /* Il s'agit d'une femme */
        printf("Quel age avez vous ?\n> ");
        fflush(stdin);
        scanf("%hd", &age);
        bpm = rFemme(age);
        if(bpm != -1) printf("Rythme cardiaque maximal : %hd bpm", bpm);
    } else { /* Erreur de saisie */
        printf("Erreur de saisie !" );
    }

    return 0;
}
