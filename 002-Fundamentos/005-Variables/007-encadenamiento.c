#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char nombre[] = "Claudia ";
    char apellidos[] = "Rubio Menco";

    //PARA CONCATENAR SE UTILIZA EL METODO DE LA LIBRERIA STRING
    strcat(nombre,apellidos);

    printf("Mi nombre completo es %s \n", (nombre));
    return 0;
}