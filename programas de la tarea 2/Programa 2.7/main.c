#include <stdio.h>
#include <stdlib.h>

/* ventas descendientes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.

P, S y R: variables de tipo real.  */

int main(void) {
    float P, S, R;

    printf("Ingrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);

    // Determinar el orden descendente
    if (P >= S && P >= R) { // P es el mayor
        if (S >= R) {
            printf("\n\nEl orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
        } else {
            printf("\n\nEl orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
        }
    } else if (S >= P && S >= R) { // S es el mayor
        if (P >= R) {
            printf("\n\nEl orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
        } else {
            printf("\n\nEl orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
        }
    } else { // R es el mayor
        if (P >= S) {
            printf("\n\nEl orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
        } else {
            printf("\n\nEl orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
        }
    }

    return 0; // Indica que el programa se ejecutó correctamente
}
