#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la ayuda de una función.
En la solución del problema se utiliza una variable global, aunque esto, como veremos más adelante, no es muy recomendable. */

int cubo(void); /* Prototipo de función. */
int I;          /* Variable global. */

int main(void) /* main debería retornar un int, no void */
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB); /* Mover el printf dentro del ciclo */
    }
    return 0; /* Es necesario retornar 0 para que main termine correctamente */
}

int cubo(void)
{
    return (I * I * I); /* La función calcula el cubo de la variable global I */
}
