#include <stdio.h>

int main(int argc, char *argv[])
{
    int dia = 1;
    // BUCLE CONTROLADO
    while (dia < 31)
    {
        printf("Hoy es el dia: %i del mes \n", dia);
        dia++;
    }

    return 0;
}