#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

signed short readEntry(void);

int main()
{
    signed short moy, entry = -101, pp, pg;
    int i;

    entry = readEntry();

    moy = entry;
    pp = entry;
    pg = entry;

    for(i = 0; i < 9; i ++)
    {
        printf("Il manque %hd valeurs.\n", (9-i));

        entry = readEntry();

        if (pp > entry) {
            pp = entry;
        } else if (pg < entry) {
            pg = entry;
        }
        moy+=entry;

    }

    moy/=10;

    printf("Moyenne : %hd\n", moy);
    printf("Min : %hd\n", pp);
    printf("Max : %hd\n", pg);
    return 0;
}

signed short readEntry (void)
{
    signed short entry = -101;
    do
    {
        printf("Entrez un nombre entre -100 et 100 ou konsekens\n");
        fflush(stdin);
        scanf("%hd", &entry);
    }
    while (entry < - 100 || entry > 100);

    return entry;
}
