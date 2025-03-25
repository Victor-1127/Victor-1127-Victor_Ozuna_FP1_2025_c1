#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por n�meros y
letras. */

void interpreta(char *); /* Prototipo de funci�n. */
void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    interpreta(cad);
}
void interpreta(char *cadena)
/* Esta funci�n se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) /* Se utiliza isalpha para observar si el caracter
                                    es una letra. */
        {
            if (i > 0 && isdigit(cadena[i - 1]))
            {
                k = cadena[i - 1] - 48;
                /* En la variable entera k se almacena el ascii del n�mero �convertido
                en caracter� que nos interesa, menos 48 que corresponde al ascii
                del d�gito 0. */
                for (j = 0; j < k; j++)
                    putchar(cadena[i]);
            }
            else
            {
                putchar(cadena[i]); // Imprimir la letra una vez si no hay n�mero previo.
            }
        }
        i++;
    }
}
