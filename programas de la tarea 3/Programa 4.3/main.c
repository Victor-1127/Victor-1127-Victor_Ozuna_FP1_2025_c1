#include <stdio.h>

/* Conflicto de variables con el mismo nombre. */

void f1(void); /* Prototipo de funci�n. */
int K_global = 5; /* Variable global. */

int main(void) {
    int I;
    for (I = 1; I <= 3; I++) {
        f1();
    }
    return 0;
}

void f1(void)
/* La funci�n utiliza tanto la variable local como la global. */
{
    int K_local = 2; /* Variable local. */
    K_local += K_local;
    printf("\n\nEl valor de la variable local es: %d", K_local);
    K_global = K_global + K_local; /* Uso de ambas variables. */
    printf("\nEl valor de la variable global es: %d", K_global);
}
