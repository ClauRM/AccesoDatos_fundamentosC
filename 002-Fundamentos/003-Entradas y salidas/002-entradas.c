#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Elige un número entre 0 y 9:");
    char numero = getchar(); // getchar es una función que viene predeterminada en la librería estandar input & ouput
    printf("El número que has elegido es: %c ", numero);
    return 0;
}