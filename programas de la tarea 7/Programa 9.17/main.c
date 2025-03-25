#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Reemplaza palabras.
El programa lee cadenas de caracteres de un archivo y cada vez que
encuentra la palabra M�xico escrita en forma incorrecta �la primera con
min�scula� la reemplaza por su forma correcta y escribe la cadena en otro
archivo. */
void cambia(FILE *, FILE *); /* Prototipo de funci�n. Se pasan dos archivos como par�metros. */

int main(void)
{
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r");  /* Se abre el archivo arc.txt para lectura. */
    ap = fopen("arc1.txt", "w"); /* Se abre el archivo arc1.txt para escritura. */
    if ((ar != NULL) && (ap != NULL))
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
        printf("No se pueden abrir los archivos");
    return 0;  // Added return statement for main.
}

void cambia(FILE *ap1, FILE *ap2)
{
    /* Esta funci�n reemplaza en la cadena de caracteres la palabra m�xico escrita
    con min�sculas �la primera letra� por su forma correcta y escribe la cadena
    de caracteres en un nuevo archivo. */
    char cad[256], *cad2;  // Increased buffer size to 256
    while (fgets(cad, sizeof(cad), ap1) != NULL)  // Changed feof to fgets() check
    {
        cad2 = strstr(cad, "m�xico");  // Localiza la subcadena "m�xico"
        while (cad2 != NULL)
        {
            cad2[0] = 'M';  // Reemplaza la 'm' por 'M'
            cad2 = strstr(cad2 + 1, "m�xico");  // Busca la siguiente ocurrencia
        }
        fputs(cad, ap2);  // Escribe la l�nea modificada en el archivo ap2
    }
}
