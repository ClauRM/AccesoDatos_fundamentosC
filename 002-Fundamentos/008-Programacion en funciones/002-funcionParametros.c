#include <stdio.h>

int sumar(int operador1, int operador2)
{
    int numero1 = operador1;
    int numero2 = operador2;
    int suma = numero1 + numero2;
    return suma;
}

int main(int argc, char *argv[])
{
    printf("La suma de los numeros es: %i \n", sumar(4, 3));

    return 0;
}