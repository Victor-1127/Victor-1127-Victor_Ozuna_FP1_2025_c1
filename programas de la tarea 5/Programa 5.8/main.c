#include <stdio.h>
#include <math.h> // Se incluye la biblioteca math.h para la funcin sqrt()

/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 nmeros primos. */

const int TAM = 100;

void Imprime(int Primos[], int T); /* Prototipos de funciones. */
int Primo(int); // Se modifica el prototipo de Primo

int main(void) {
    int P[TAM]; // Se inicializa el arreglo con el primer primo
    P[0] = 2;
    int J = 1, PRI = 3; // J inicia en 1 porque P[0] ya est inicializado
    while (J < TAM) { // Se usa < TAM en lugar de <= TAM
        if (Primo(PRI)) { // Se llama directamente a Primo y se verifica el resultado
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Solo se verifican nmeros impares
    }
    Imprime(P, TAM);
    return 0; // Se agrega return 0
}

int Primo(int A)
/* Esta funcin determina si A es primo, regresa 1 si es primo, 0 si no. */
{
    int DI;
    if (A <= 1) return 0; // 1 y nmeros menores no son primos
    if (A <= 3) return 1; // 2 y 3 son primos
    if (A % 2 == 0 || A % 3 == 0) return 0; // Multiplos de 2 y 3 no son primos

    // Se optimiza el bucle para solo revisar hasta la raz cuadrada de A
    for (DI = 5; DI <= sqrt(A); DI += 6) {
        if (A % DI == 0 || A % (DI + 2) == 0)
            return 0; // Si es divisible, no es primo
    }
    return 1; // Si no se encontr ningn divisor, es primo
}

void Imprime(int Primos[], int T)
/* Esta funcin imprime el arreglo unidimensional de nmeros primos. */
{
    int I;
    for (I = 0; I < T; I++)
        printf("Primos[%d]: %d\n", I, Primos[I]); // Se agrega salto de lnea
}
