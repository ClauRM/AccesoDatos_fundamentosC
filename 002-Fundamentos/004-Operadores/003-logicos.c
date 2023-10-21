#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("En los resultados: 1 es true y 0 es false \n");

    printf("Dime si es cierto (4 > 3 && 3 > 2 && 2 > 1): %i \n", (4 > 3 && 3 > 2 && 2 > 1));
    printf("Dime si es cierto (4 > 3 && 3 > 2 && 2 > 2): %i \n", (4 > 3 && 3 > 2 && 2 > 2));

    printf("Dime si es cierto (4 > 3 || 3 > 2 || 2 > 1): %i \n", (4 > 3 || 3 > 2 || 2 > 1));
    printf("Dime si es cierto (4 > 3 || 3 > 2 || 2 > 2): %i \n", (4 > 3 || 3 > 2 || 2 > 2));
    printf("Dime si es cierto (4 > 3 || 3 > 3 || 2 > 2): %i \n", (4 > 3 || 3 > 3 || 2 > 2));
    printf("Dime si es cierto (4 > 4 || 3 > 3 || 2 > 2): %i \n", (4 > 4 || 3 > 3 || 2 > 2));
    return 0;
}