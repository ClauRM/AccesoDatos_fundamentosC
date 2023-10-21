#include <stdio.h>

int main(int argc, char *argv[])
{
    int edad = 29;

    do
    {
        printf("Tu edad %i, eres menor de 35 anios \n", edad);
        edad++;
    } while (edad < 35);

    return 0;
}