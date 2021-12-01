#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

#define TAILLE 100

signed short tab[TAILLE];

void Remplissage_Tab (void);
void Affiche_Tab (signed short *array, const signed short dim);

void Remplissage_Alea(signed short *array, const signed short taille, signed short min, signed short max);

int main()
{
    srand((unsigned int)time(0));

    Remplissage_Alea(&tab, TAILLE, -1000, 1000);
    Affiche_Tab(&tab, TAILLE);
    return 0;
}

void Remplissage_Tab (void)
{

    signed short i = 0;

    for (i; i < TAILLE; i++)
    {
        tab[i] = i;
    }

}

void Affiche_Tab (signed short *array, const signed short dim)
{
    signed short i = 0;

    for (i; i < dim; i +=10)
    {
        printf("%5hd %5hd %5hd %5hd %5hd %5hd %5hd %5hd %5hd %5hd\n", array[i], array[i+1], array[i+2], array[i+3], array[i+4], array[i+5], array[i+6], array[i+7], array[i+8], array[i+9]);
    }
}

void Remplissage_Alea(signed short *array, const signed short taille, signed short min, signed short max)
{
    signed short i, value, bornes;

    bornes=max;

    if (min < 0) bornes+=-min;
    else bornes +=min;
    bornes ++;

    for (i = 0; i < taille; i ++) {

        value=rand()%bornes;
        value+=min;

        array[i] = value;
    }
}
