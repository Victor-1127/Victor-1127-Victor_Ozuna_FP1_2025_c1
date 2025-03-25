#include <stdio.h>

/* Producto de vectores.
El programa calcula el producto de dos vectores y almacena el resultado en otro arreglo unidimensional. */

const int MAX = 10; /* Se define una constante para el tamao de los arreglos. */

void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T); /* Prototipos de funciones. */
void Producto(int *X, int *Y, int *Z, int T); /* Observa que en los parmetros, para indicar que lo que se recibe es un arreglo, se puede escribir VEC[] o *VEC. */

int main(void) {
    int VE1[MAX], VE2[MAX], VE3[MAX];
    /* Se declaran tres arreglos de tipo entero de 10 elementos. */
    Lectura(VE1, MAX);
    /* Se llama a la funcin Lectura. Observa que el paso del arreglo a la funcines por referencia. Slo se debe incluir el nombre del arreglo. */
    Lectura(VE2, MAX);
    Producto(VE1, VE2, VE3, MAX);
    /* Se llama a la funcin Producto. Se pasan los nombres de los tres arreglos. */
    printf("\nProducto de los Vectores\n"); // Agregado un salto de línea
    Imprime(VE3, MAX);
    return 0; // Añadido return 0 para indicar ejecución exitosa
}

void Lectura(int VEC[], int T)
/* La funcin Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo entero. */
{
    int I;
    printf("\n");
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime(int VEC[], int T)
/* La funcin Imprime se utiliza para imprimir un arreglo unidimensional de T elementos de tipo entero. */
{
    int I; // Declaración de I
    for (I = 0; I < T; I++)
        printf("VEC[%d]: %d\n", I + 1, VEC[I]); // Añadido salto de línea
}

void Producto(int *X, int *Y, int *Z, int T)
/* Esta funcin se utiliza para calcular el producto de dos arreglos unidimensionales de T elementos de tipo entero. */
{
    int I;
    for (I = 0; I < T; I++)
        Z[I] = X[I] * Y[I];
}
