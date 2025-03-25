#include <stdio.h>
#include <math.h>

/* Temperaturas.
El programa recibe como datos 24 n�meros reales que representan las
temperaturas en el exterior en un per�odo de 24 horas. Calcula el
promedio del d�a y las temperaturas m�xima y m�nima con la hora en la
que se registraron. */

void Acutem(float TEM);
void Maxima(float TEM, int I);  /* Prototipos de funciones. */
void Minima(float TEM, int I);

float ACT = 0.0;
float MAX = -50.0;       /* Variables globales. */
float MIN = 60.0;

int HMAX;
int HMIN;

/* Variables globales. ACT se utiliza para acumular las temperaturas,
por esa raz�n se inicializa en cero. MAX se utiliza para calcular la
m�xima; se inicializa en �50 para que el primer valor que se ingrese
modifique su contenido. MIN se usa para calcular la m�nima; se
inicializa con un valor muy alto para que el primer valor ingresado
modifique su contenido. HMAX y HMIN se utilizan para almacenar el
horario en que se produjeron las temperaturas m�xima y m�nima,
respectivamente. */

int main(void) {
    float TEM;
    int I;
    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);
        Maxima(TEM, I); /* Llamada a las funciones. Paso de par�metros
        por valor. */
        Minima(TEM, I);
    }
    printf("\nPromedio de temperatura: %.2f", ACT / 24);
    printf("\nTemperatura maxima: %.2f, Hora: %d", MAX, HMAX);
    printf("\nTemperatura minima: %.2f, Hora: %d", MIN, HMIN);
    return 0;
}

void Acutem(float TEM) {
    ACT += TEM;
}

void Maxima(float TEM, int I) {
    if (TEM > MAX) {
        MAX = TEM;
        HMAX = I;
    }
}

void Minima(float TEM, int I) {
    if (TEM < MIN) {
        MIN = TEM;
        HMIN = I;
    }
}
