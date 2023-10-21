#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *archivo;                                      // crear archivo de tipo FILE, con nombre 'archivo'
    archivo = fopen("agenda.txt", "w");                 // fopen (abrir), nombre del fichero y acción write (w)
    fprintf(archivo, "Esto es una prueba de texto \n"); // imprimir a un archivo
    fclose(archivo);                                    // cierro fichero
    return 0;
}