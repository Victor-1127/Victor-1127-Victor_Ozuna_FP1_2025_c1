#include <stdio.h>
#include <math.h>

/*Funcion matematica.
El programa obtiene el resultado de una funcion.

OP y T: variables de tipo entero.
RES: variable de tipo real.*/

void main (void)
{
    int OP,T;
    float RES;
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf("%d", &OP, &T);
    switch(OP)
    {
        case 1: RES = T / 5;
        break;
        case 2: RES = pow(T,T);
        /* La funcion pow esta definidia en la biblioteca math.h*/
        break;
        default: RES = 1;
    }
    printf("\nResultado: %7.2f", RES);
}
