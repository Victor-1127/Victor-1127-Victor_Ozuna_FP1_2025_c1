#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, as�
como la forma de acceso a los campos de las variables o apuntadores de tipo
estructura, tanto para lectura como para escritura. Se utiliza adem�s una
funci�n que recibe como par�metro un apuntador de tipo estructura. */
typedef struct /* Declaraci�n de la estructura domicilio utilizando
un typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;
struct empleado /* Declaraci�n de la estructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura
    domicilio de la estructura empleado. */
};
void Lectura(struct empleado *a)
/* Funci�n que permite leer los campos de un apuntador de tipo estructura
empleado. */
{
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("Ingrese el departamento de la empresa: ");
    fgets(a->departamento, sizeof(a->departamento), stdin);
    a->departamento[strcspn(a->departamento, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("�-Ingrese la direcci�n del empleado�-");
    printf("\n\tCalle: ");
    fgets(a->direccion.calle, sizeof(a->direccion.calle), stdin);
    a->direccion.calle[strcspn(a->direccion.calle, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("\tN�mero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &a->direccion.cp);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("\tLocalidad: ");
    fgets(a->direccion.localidad, sizeof(a->direccion.localidad), stdin);
    a->direccion.localidad[strcspn(a->direccion.localidad, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
}
void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jer�nimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;
    /* Se declaran diferentes variables y apuntadores de la estructura empleado
    para que el lector pueda apreciar tambi�n las diferentes formas en que los
    campos reciben valores. */
    /* En el programa principal se leen los campos de una variable, e3, y un
    apuntador de tipo estructura, *e1. */
    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", &(*e1).nombre);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, sizeof(e1->departamento), stdin);
    e1->departamento[strcspn(e1->departamento, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("�-Ingrese la direcci�n del empleado�-");
    printf("\n\tCalle: ");
    fgets(e1->direccion.calle, sizeof(e1->direccion.calle), stdin);
    e1->direccion.calle[strcspn(e1->direccion.calle, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("\tN�mero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e1->direccion.cp);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, sizeof(e1->direccion.localidad), stdin);
    e1->direccion.localidad[strcspn(e1->direccion.localidad, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", &e3.nombre);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("Ingrese el departamento de la empresa: ");
    fgets(e3.departamento, sizeof(e3.departamento), stdin);
    e3.departamento[strcspn(e3.departamento, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("�-Ingrese la direcci�n del empleado�-");
    printf("\n\tCalle: ");
    fgets(e3.direccion.calle, sizeof(e3.direccion.calle), stdin);
    e3.direccion.calle[strcspn(e3.direccion.calle, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    printf("\tN�mero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e3.direccion.cp);
    getchar(); // Limpiar el car�cter de nueva l�nea del b�fer de entrada.
    printf("\tLocalidad: ");
    fgets(e3.direccion.localidad, sizeof(e3.direccion.localidad), stdin);
    e3.direccion.localidad[strcspn(e3.direccion.localidad, "\n")] = 0; // Eliminar el car�cter de nueva l�nea.
    /* En la funci�n Lectura se leen los campos de una variable, e4, y un apuntador
    de tipo estructura, *e2. */
    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    Lectura(e2);
    Lectura(&e4);
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento,
           e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp,
           e1->direccion.localidad);
    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\tt%s", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}

