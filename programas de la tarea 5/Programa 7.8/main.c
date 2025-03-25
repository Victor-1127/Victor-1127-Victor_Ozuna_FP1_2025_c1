#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Min�sculas y may�sculas.
El programa, al recibir como dato un arreglo unidimensional de tipo
cadena de caracteres, determina el n�mero de min�sculas y may�sculas
que hay en cada cadena. */

void minymay(char *cadena); /* Prototipo de funci�n corregido. */
void main(void)
{
    int i, n;
    char FRA[20][50];
    /* Observa c�mo se declara el arreglo unidimensional de cadena de
    caracteres. */
    printf("\nIngrese el n�mero de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    for (i = 0; i < n; i++)
    {
        /* Para cada fila se lee la cadena correspondiente. */
        printf("Ingrese la l�nea %d de texto: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin); // Usar fgets en lugar de gets.
        // Eliminar el car�cter de nueva l�nea al final de la cadena le�da por fgets.
        FRA[i][strcspn(FRA[i], "\n")] = 0;
    }
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Resultados para la l�nea %d:\n", i + 1);
        minymay(FRA[i]);
        printf("\n"); // Agregar una l�nea en blanco para separar los resultados.
    }
}
void minymay(char *cadena)
/* Esta funci�n se utiliza para calcular el n�mero de min�sculas
y may�sculas que hay en cada cadena. */
{
    int i = 0, mi = 0, ma = 0;
    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;
        i++;
    }
    printf("N�mero de letras min�sculas: %d\n", mi);
    printf("N�mero de letras may�sculas: %d\n", ma);
}
