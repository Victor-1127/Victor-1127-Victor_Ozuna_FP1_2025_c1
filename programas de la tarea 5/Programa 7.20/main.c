#include <stdio.h>
#include <string.h>

int longitud(char *cadena); /* Prototipo de función. */
void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];
    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Limpiar el carácter de nueva línea del búfer de entrada.
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin); // Usar fgets en lugar de gets.
        // Eliminar el carácter de nueva línea al final de la cadena leída por fgets.
        FRA[i][strcspn(FRA[i], "\n")] = 0;
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);
        if (t > l)
        {
            l = t;
            p = i;
        }
    }
    printf("\nLa cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("\nLongitud: %d", l);
}
int longitud(char *cadena)
/* Esta función calcula la longitud de la cadena. Es idéntica a la función
cuenta del programa 7.13. */
{
    int cue = 0;
    while (cadena[cue] != '\0')
        cue++;
    return (cue);
}
