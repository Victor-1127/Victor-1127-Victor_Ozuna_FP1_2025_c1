#include <stdio.h>
#include <ctype.h>
/* Letras min�sculas y may�sculas.
El programa, al recibir como dato un archivo formado por cadenas de
caracteres, determina el n�mero de letras min�sculas y may�sculas que hay
en el archivo. */
void minymay(FILE *); /* Prototipo de funci�n. */

int main(void)
{
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)  // Fixed quotation marks
    {
        minymay(ap);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");  // Fixed quotation marks
    return 0;  // Added return statement for main.
}

void minymay(FILE *ap1)
{
    char cad[30];
    int i, mi = 0, ma = 0;
    while (fgets(cad, sizeof(cad), ap1) != NULL)  // Fixed fgets loop
    {
        i = 0;
        while (cad[i] != '\0')  // Fixed null terminator check
        {
            if (islower(cad[i]))
                mi++;
            else if (isupper(cad[i]))
                ma++;
            i++;
        }
    }
    printf("\n\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d", ma);
}
