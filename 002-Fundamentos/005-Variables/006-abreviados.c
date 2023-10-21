#include <stdio.h>

int main(int argc, char *argv[])
{
    int edad = 29;
    printf("Mi edad es de %i anios \n", edad);
    edad+=2;
    printf("Si sumo 2, mi edad es de %i anios \n", edad);
    edad-=2;
    printf("Si resto 2, mi edad es de %i anios \n", edad);
    edad*=2;
    printf("Si multiplico 2, mi edad es de %i anios \n", edad);
    edad/=2;
    printf("Si divido entre 2, mi edad es de %i anios \n", edad);
    return 0;
}