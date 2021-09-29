#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool Entre_Nombre(signed short BorneMin, signed short BorneMax, signed short Value);

int main()
{
    signed short Value, Response, Count;
    srand((unsigned int) time(0));

    Value = rand() % 101;

    printf("Choisir un nombre\n");
    fflush(stdin);
    scanf("%hd", &Response);

    do {
        Count++;
        printf("Doit etre inclus entre 0 et 100\n");
        scanf("%hd", &Response);
    } while (Entre_Nombre(0,100, Response));

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

    printf("U won! En %hd coups, c'est ok", Count);

    return 0;
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
