#include <stdio.h>
#include <string.h>

/* Declaraci�n de cadenas de caracteres y asignaci�n de valores. */
void main(void)
{
    char *cad0;
    cad0 = "Argentina"; /* La declaraci�n y la asignaci�n son correctas. */
    puts(cad0);
    cad0 = "Brasil";
    /* Correcto. Se modifica el contenido de la posici�n en memoria a la que apunta
    la variable cad0 �apuntador de tipo cadena de caracteres. */
    puts(cad0);
    char cad1[100]; // Declaraci�n correcta de cad1
    printf("Ingrese una cadena: ");
    fgets(cad1, sizeof(cad1), stdin); // Uso de fgets en lugar de gets
    /* Correcto. Primero se le asigna un valor a la posici�n de memoria a la que
    apunta cad1. Luego podemos modificar el contenido de esta posici�n de memoria
    utilizando la funci�n gets. */
    puts(cad1);
    char cad2[20] = "M�xico"; /* Correcto. */
    puts(cad2);
    printf("Ingrese otra cadena: ");
    fgets(cad2, sizeof(cad2), stdin); // Uso de fgets en lugar de gets
    /* El valor de una cadena (declarada como cadena[longitud]) se puede modificar
    por medio de lecturas o utilizando funciones de la biblioteca string.h
    (ejemplo 7.6). */
    puts(cad2);
    strcpy(cad2, "Guatemala"); // Uso de strcpy para asignar la cadena
    /* Correcto. Se utiliza strcpy para copiar la cadena "Guatemala" en cad2. */
    puts(cad2);
}
