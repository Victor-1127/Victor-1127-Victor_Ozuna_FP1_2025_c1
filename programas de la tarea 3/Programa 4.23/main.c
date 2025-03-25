#include <stdio.h>

void trueque(int *x, int *y) {
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x) {
    return (x + x);
}

int main(void) {
    int a = 5, b = 10;

    printf("Valores iniciales: a = %d, b = %d\n", a, b);

    trueque(&a, &b);

    printf("Valores después de trueque: a = %d, b = %d\n", a, b);

    int resultadoSuma = suma(a);

    printf("Resultado de suma(a): %d\n", resultadoSuma);

    return 0;
}
