#include <stdio.h>

int main(int argc, char *argv[])
{
    int edad = 29;
    if (edad < 30)
    {
        printf("Tienes %i anios, todavia eres joven", edad);
    }
    else
    {
        printf("Tienes %i anios, ya no eres tan joven", edad);
    }

    return 0;
}