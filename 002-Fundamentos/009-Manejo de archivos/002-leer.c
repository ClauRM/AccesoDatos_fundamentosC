#include <stdio.h>

int main(int argc, char *argv[])
{
    char cadena[100];
    FILE *archivo;                      // crear archivo de tipo FILE, con nombre 'archivo'
    archivo = fopen("agenda.txt", "r"); // fopen (abrir), nombre del fichero y acción read (r)

    // mientras que haya lineas a leer en el fichero, toma la cadena de max 100 caracteres y no sea null
    while (fgets(cadena, 100, archivo) != NULL)
    {
        puts(cadena); // recupera contenido
    }

    fclose(archivo); // cierro fichero
    return 0;
}