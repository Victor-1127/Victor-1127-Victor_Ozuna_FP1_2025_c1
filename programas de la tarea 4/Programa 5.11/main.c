#include <stdio.h>

#define MAX 100

void Lectura(int A[], int T);
int Binaria(int A[], int T, int E);
void Ordenar(int A[], int T);  // Se agrega funci�n para ordenar el arreglo

int main(void) {
    int RES, ELE, TAM, VEC[MAX];

    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    // Se ordena el arreglo antes de la b�squeda binaria
    Ordenar(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE);

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posici�n: %d", RES + 1);  // Se ajusta a 1-based index
    else
        printf("\nEl elemento no se encuentra en el arreglo");

    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Ordenar(int A[], int T) {
    int i, j, temp;
    for (i = 0; i < T - 1; i++) {
        for (j = 0; j < T - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1, CEN;

    while (IZQ <= DER) {
        CEN = (IZQ + DER) / 2;

        if (E == A[CEN])
            return CEN; // Se devuelve la posici�n encontrada

        if (E > A[CEN])
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }

    return -1; // Se devuelve -1 si el elemento no est� en el arreglo
}
