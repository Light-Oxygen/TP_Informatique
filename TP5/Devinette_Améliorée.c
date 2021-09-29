#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

/* Prototypes */
bool Oui_Non (void);
void Devinette(void);
bool Entre_Nombre(signed short BorneMin, signed short BorneMax, signed short Value);

int main()
{
    bool replay = true;
    do
    {
        Devinette();
        printf("Voulez-vous rejouer ?");
        replay = Oui_Non();

    } while (replay);

    return 0;
}

void Devinette ()
{
    signed short Value, Response, Count;
    srand((unsigned int) time(0));

    Value = rand() % 101;

    printf("Choisir un nombre\n");
    fflush(stdin);
    scanf("%hd", &Response);

    while (!Entre_Nombre(0, 100, Response)) {
        Count++;
        printf("Doit etre inclus entre 0 et 100\n");
        scanf("%hd", &Response);
    }

    while (Response != Value) {
        Count++;

        if(!Entre_Nombre(0,100,Response)) {
            printf("Doit etre inclus entre 0 et 100\n");
            scanf("%hd", &Response);
            continue;
        }

        printf("C'est non !");
        if (Response < Value) {
            printf(" Trop petit\n");
        } else {
            printf(" Trop grand\n");
        }

        scanf("%hd", &Response);
    }

    printf("U won! En %hd coups, c'est ok\n", Count);
}

bool Entre_Nombre(signed short BorneMin, signed short BorneMax, signed short Value)
{
    bool r = true;

    if(Value > BorneMax)
    {
        r = false;
    }
    else if (Value < BorneMin)
    {
        r = false;
    }

    return r;
}

bool Oui_Non (void)
{
    bool b;
    char c;

    do
    {
        c=getch();
    } while (tolower(c) != 'o' && tolower(c) != 'n');

    if (tolower(c)=='o') {
        b = true;
    } else {
        b= false;
    }

    return b;
}
