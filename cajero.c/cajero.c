#include <stdio.h>

int main (void)
{


    int monto;
    printf ("Ingrese la cantidad de billetes a extraer: ");
    scanf ("%d", &monto);

    int de50 = 0;
    int de20 = 0;
    int de10 = 0;
    int de5 = 0;
    int de1 = 0;

    while (monto >= 50) 
    {
        de50++;
        monto = monto - 50;
    }

    while (monto >= 20) 
    {
        de20++;
        monto = monto - 20;
    }

    while (monto >= 10)
    {
        de10++;
        monto = monto - 10;
    }

    while (monto >= 5)
    {
        de5++;
        monto = monto -5;
    }

    while (monto >= 1)
    {
        de1++;
        monto = monto - 1;
    }

    printf ("Cantidad de billetes de 50: %d\n", de50);
    printf ("Cantidad de billetes de 20: %d\n", de20);
    printf ("Cantidad de billetes de 10: %d\n", de10);
    printf ("Cantidad de billetes de 5: %d\n", de5);
    printf ("Cantidad de billetes de 1: %d\n", de1);

    return 0;
}