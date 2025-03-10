#include <stdio.h>

void main(void) {
    float PRE, NPR;

    // Pedir el precio del producto
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);

    // Aplicar el incremento si es menor a 1500
    if (PRE < 1500) {
        NPR = PRE * 1.11; // Incremento del 11%
    } else {
        NPR = PRE; // El precio no cambia
    }

    // Mostrar el nuevo precio
    printf("El nuevo precio del producto es: %.2f\n", NPR);
}

