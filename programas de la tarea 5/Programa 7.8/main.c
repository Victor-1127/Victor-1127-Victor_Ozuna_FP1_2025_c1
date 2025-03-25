#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Minúsculas y mayúsculas.
El programa, al recibir como dato un arreglo unidimensional de tipo
cadena de caracteres, determina el número de minúsculas y mayúsculas
que hay en cada cadena. */

void minymay(char *cadena); /* Prototipo de función corregido. */
void main(void)
{
    int i, n;
    char FRA[20][50];
    /* Observa cómo se declara el arreglo unidimensional de cadena de
    caracteres. */
    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Limpiar el carácter de nueva línea del búfer de entrada.
    for (i = 0; i < n; i++)
    {
        /* Para cada fila se lee la cadena correspondiente. */
        printf("Ingrese la línea %d de texto: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin); // Usar fgets en lugar de gets.
        // Eliminar el carácter de nueva línea al final de la cadena leída por fgets.
        FRA[i][strcspn(FRA[i], "\n")] = 0;
    }
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Resultados para la línea %d:\n", i + 1);
        minymay(FRA[i]);
        printf("\n"); // Agregar una línea en blanco para separar los resultados.
    }
}
void minymay(char *cadena)
/* Esta función se utiliza para calcular el número de minúsculas
y mayúsculas que hay en cada cadena. */
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
    printf("Número de letras minúsculas: %d\n", mi);
    printf("Número de letras mayúsculas: %d\n", ma);
}
