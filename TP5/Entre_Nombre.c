#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Entre_Nombre(signed short BorneMin, signed short BorneMax, signed short Value);

int main()
{
    signed short Min, Max, Value;
    
    printf("Borne min :\n");
    fflush(stdin);
    scanf("%hd", &Min);

    printf("Borne max :\n");
    fflush(stdin);
    scanf("%hd", &Max);
    do {
        printf("Valeur :\n");
        fflush(stdin);
        scanf("%hd", &Value);

    } while (Entre_Nombre(Min, Max, Value) == 0);
    
    

    printf("GG WP t'es intelligent tu respectes tes propres bornes avec %hd !", Value);
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
