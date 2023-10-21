#include <stdio.h>

int main(int argc, char *argv[])
{
    char *agenda[10][4]; // agenda de 10 entradas y cada entrada soporta 4 registros maximo

    agenda[0][0] = "Claudia";
    agenda[0][1] = "Rubio Menco";
    agenda[0][2] = "12456";
    agenda[0][3] = "crubiom@alumnos.imf.com";

    agenda[1][0] = "Mateo";
    agenda[1][1] = "Allende Rubio";
    agenda[1][2] = "78901";
    agenda[1][3] = "mallender@info.com";

    printf("El correo del segundo registro es: %s \n", agenda[1][3]);
    return 0;
}