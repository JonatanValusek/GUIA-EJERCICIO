#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ventas1 = 0, ventas2 = 0, ventas3 = 0;
    int precio;
    int vendedor = 0;
    int seguir=1;


    while(seguir==1)
    {
        printf("\nIngrese numero de vendedor: ");
        scanf("%d", &vendedor);

    switch(vendedor)
    {
    case 1:

        printf("\nIngrese el valor de la factura: ");
        scanf("%d", &precio);
        if (precio>0)
        {
            ventas1 += precio;
        }
        break;

    /*case 2:
        printf("\nIngrese ingrese el valor de fafctura: ");
        scanf("%d", &vendedor);
        ventas1++;
        break;

    case 3:
        printf("\nIngrese numero de vendedor: ");
        scanf("%d", &vendedor);
        ventas1++;
        break; */



    }
        printf("\nDesea seguir? 1/0: ");
        scanf("%d",&seguir);
    }

    printf("\nEl vendedor numero 1 vendio %d pesos en el mes ", ventas1);

    return 0;
}
