#include <stdio.h>

int main(int argc, char *argv[])
{
    int diaSemana = 1;
    switch (diaSemana)
    {
    case 1:
        printf("Dia %i de la semana, hoy es lunes", diaSemana);
        break;
    case 2:
        printf("Dia %i de la semana, hoy es martes", diaSemana);
        break;
    case 3:
        printf("Dia %i de la semana, hoy es miercoles", diaSemana);
        break;
    case 4:
        printf("Dia %i de la semana, hoy es jueves", diaSemana);
        break;
    case 5:
        printf("Dia %i de la semana, hoy es viernes", diaSemana);
        break;
    case 6:
        printf("Dia %i de la semana, hoy es sabado", diaSemana);
        break;
    case 7:
        printf("Dia %i de la semana, hoy es domingo", diaSemana);
        break;

    default:
        break;
    }

    return 0;
}