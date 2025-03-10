#include <stdio.h>

void main(void)

{
    int TRA, EDA, DIA;
    float COS;
    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);
    switch(TRA)
    {
        case 1: COS = 2800; break;
        case 2: COS = 1950; break;
        case 3: COS = 2500; break;
        case 4: COS = 1150; break;
        default: COS = -1; break;
    }
    if (COS != -1)
    {
        COS *=DIA; //multiplicamos el costo base por los dias
        if (EDA >= 60)
            COS *= 0.75; //Descuento del 25% si tiene 60 años o mas
        else if (EDA <= 25)
            COS *= 0.85; //Descuento del 15% si tiene 25 años mas o menos
        printf("\nClave tratamiento: %d\tDias: %d\tCosto total: %8.2f\n", TRA, DIA, COS);
    }
    else
        printf("\nLa clave del tratamiento es incorrecta\n");
}
