#include <stdio.h>

int sumar()
{
    int numero1 = 4;
    int numero2 = 3;
    int suma = numero1 + numero2;
    return suma;
}

int main(int argc, char *argv[])
{
    printf("La suma de los numeros es: %i \n", sumar());

    return 0;
}