/* Inclusion des librairies nécessaires */
#include <stdio.h>
#include <stdlib.h>

/* Déclaration des deux fonctions, voir lignes suivantes */
signed short rHomme(signed short age);

signed short rFemme(signed short age);

/* Fonction "rHomme" -> Permet de calculer le Rythme cardiaque maximal d'un homme en fonction de son âge */
signed short rHomme(signed short age)
{
    /* Déclaration de la variable numérique Rythme, permettant de renvoyer le rythme cardiaque d'un homme */ 
    signed Rythme;
    if (age > 50)
    {
        Rythme = 165; /* Si l'âge est supérieur à 50 ans, retour de la constante définie par l'énoncé */
    }
    else if (age > 10) /* Test : L'âge de l'individu est supérieur à 10 ans. Application de la formule de calcul de l'énoncé */
    {
        Rythme = 220-(age*11)/10;
    }
    else
    { /* Retour de condition : Age indiqué inférieur à 10 (compris entre -32000 et 10 ans) */
        if(age < 0)
        { /* Âge inférieur à 0, donc c'est un troll */
            printf("Mission aborted ? Mais sinon, erreur de saisie!");
            Rythme = -1; /* Retour de la valeur -1 pour la suite du programme */
        }
        else
        {
            /* Calcul à l'aide de la formule sur l'intervalle d'âge 0-10 ans */
            Rythme = 230-2*age;
        }
    }
    /* Permet de récupérer en sortie de la fonction la valeur du rythme cardiaque pour une interprétation du résultat par le main */
    return Rythme;
}

/* Fonction "rFemme" -> Permet de calculer le Rythme cardiaque maximal d'une femme en fonction de son âge */
signed short rFemme(signed short age)
{
    /* Déclaration de la variable numérique Rythme, permettant de renvoyer le rythme cardiaque d'une femme */ 
    signed Rythme;
    if (age > 55)
    {
        Rythme = 165; /* Si l'âge est supérieur à 55 ans, retour de la constante définie par l'énoncé */
    }
    else if (age > 10) /* Test : L'âge de l'individu est supérieur à 10 ans. Application de la formule de calcul de l'énoncé */
    {
        Rythme = 220-age;
    }
    else
    { /* Retour de condition : Age indiqué inférieur à 10 (compris entre -32000 et 10 ans) */
        if(age < 0)
        { /* Âge inférieur à 0, donc c'est un troll */
            printf("Mission aborted ? Mais sinon, erreur de saisie!");
            Rythme = -1; /* Retour de la valeur -1 pour la suite du programme */
        }
        else
        {
            /* Calcul à l'aide de la formule sur l'intervalle d'âge 0-10 ans */
            Rythme = 230-2*age;
        }
    }
    /* Permet de récupérer en sortie de la fonction la valeur du rythme cardiaque pour une interprétation du résultat par le main */
    return Rythme;
}

/* Fonction main */ 
int main()
{
   /* Déclaration de variables :
    * bpm : Retour de la fonction permettant de calculer le rythme cardiaque maximal (signed short renvoyé par "rHomme", ou "rFemme")
    * age : Âge entré par l'utilisateur
    * genre : Genre entré par l'utilisateur */
  signed short bpm, age, genre;

    printf("Et voici la question pour un million d'euros... Vous etes un homme (1) ou une femme ? (2)\n> ");
    fflush(stdin); /* Nettoyage du buffer */
    scanf("%hd", &genre); /* Enregistrement du numéro attribué au genre dans la variable Genre */ 

    if (genre == 1) /* D'après la réponse, il s'agit d'un homme */
    {
        printf("Quel age avez vous ?\n> "); /* Demande de l'âge */
        fflush(stdin); /* Nettoyage du buffer (fflush) et enregistrement de l'âge dans la variable age */
        scanf("%hd", &age); 
        bpm = rHomme(age); /* Enregistrement du rythme cardiaque maximal calculé */
        if(bpm != -1) 
        {
            /* Si le rythme cardiaque est égal à -1 l'exécution du code s'arrête ici. Sinon, l'âge saisi était correct et on renvoie en console la valeur calculée */
            printf("Rythme cardiaque maximal : %hd bpm", bpm);
        }

    } else if (genre == 2) { /* D'après la réponse, il s'agit d'une femme */
        printf("Quel age avez vous ?\n> "); /* Demande de l'âge */
        fflush(stdin); /* Nettoyage du buffer (fflush) et enregistrement de l'âge dans la variable age */
        scanf("%hd", &age);
        bpm = rFemme(age); /* Enregistrement du rythme cardiaque maximal calculé */
        if(bpm != -1) 
        {
            /* Si le rythme cardiaque est égal à -1 l'exécution du code s'arrête ici. Sinon, l'âge saisi était correct et on renvoie en console la valeur calculée */
            printf("Rythme cardiaque maximal : %hd bpm", bpm);
        }
    } else { /* Erreur de saisie */
        printf("Erreur de saisie !" );
    }

    /* L'éxécution du programme n'a posé aucun problème, fin du code */
    return 0;
}
