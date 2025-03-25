#include <stdio.h>
#include <ctype.h>
/* Letras min�sculas y may�sculas.
El programa, al recibir como dato un archivo formado por cadenas de caracteres,
determina el n�mero de letras min�sculas y may�sculas que hay en el archivo. */

void minymay(FILE *); /* Prototipo de funci�n. */
/* Observa que esta funci�n va a recibir un archivo como par�metro. */

int main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        /* Se llama a la funci�n minymay. Se pasa el archivo ar como par�metro. */
        fclose(ar);
    }
    else
        printf("No se pudo abrir el archivo");
    return 0;  // Added return statement for main.
}

void minymay(FILE *arc)
{
    /* Esta funci�n cuenta el n�mero de min�sculas y may�sculas que hay en el
    archivo arc. */
    int min = 0, may = 0;
    char p;
    while ((p = fgetc(arc)) != EOF)  // Fixed to check EOF directly after fgetc()
    {
        if (islower(p))  // Check if the character is lowercase
            min++;
        else if (isupper(p))  // Check if the character is uppercase
            may++;
    }
    printf("\nN�mero de min�sculas: %d", min);
    printf("\nN�mero de may�sculas: %d", may);
}
