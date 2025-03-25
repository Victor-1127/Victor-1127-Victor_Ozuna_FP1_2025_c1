#include <stdio.h>

/* Frecuencia de calificaciones.
El programa, al recibir como datos las calificaciones de un grupo de 50 alumnos, obtiene la frecuencia de cada una de las calificaciones y adems escribe cul es la frecuencia ms alta. */

const int TAM = 50;

void Lectura(int *, int);
void Frecuencia(int *, int, int *, int); // Prototipos de funciones.
void Impresion(int *, int);
void Mayor(int *, int);

int main(void) {
    int CAL[TAM], FRE[6] = {0}; // Declaracin de los arreglos.
    Lectura(CAL, TAM); // Se llama a la funcin Lectura.
    Frecuencia(CAL, TAM, FRE, 6);
    // Se llama a la funcin Frecuencia, se pasan ambos arreglos.
    printf("\nFrecuencia de Calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);
    return 0; // Se agrega return 0 para indicar ejecucin exitosa
}

void Lectura(int VEC[], int T)
/* La funcin Lectura se utiliza para leer el arreglo de calificaciones. */
{
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese la calificacin -0:5- del alumno %d: ", I + 1);
        scanf("%d", &VEC[I]);
        // Validacin de entrada
        if (VEC[I] < 0 || VEC[I] > 5) {
            printf("Error: Calificacin fuera de rango. Debe ser entre 0 y 5.\n");
            I--; // Decrementa I para repetir la entrada para este alumno
        }
    }
}

void Impresion(int VEC[], int T)
/* La funcin Impresin se utiliza para imprimir el arreglo de frecuencias. */
{
    int I;
    for (I = 0; I < T; I++)
        printf("VEC[%d]: %d\n", I, VEC[I]); // Se agrega salto de lnea para mejor formato
}

void Frecuencia(int A[], int P, int B[], int T)
/* Esta funcin calcula la frecuencia de calificaciones. */
{
    int I;
    for (I = 0; I < P; I++)
        if ((A[I] >= 0) && (A[I] < 6)) // Se valida que la calificacin sea correcta.
            B[A[I]]++; // Observa la forma de almacenar e incrementar las frecuencias.
}

void Mayor(int *X, int T)
/* Esta funcin obtiene la primera ocurrencia de la frecuencia ms alta. */
{
    int I, MFRE = 0, MVAL = X[0];
    for (I = 1; I < T; I++)
        if (MVAL < X[I]) {
            MFRE = I;
            MVAL = X[I];
        }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d\n", MFRE, MVAL); // se agrega salto de linea
}
