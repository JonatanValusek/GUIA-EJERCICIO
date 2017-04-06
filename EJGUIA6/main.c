#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  numero, contnum = 0, contpost = 0, contneg = 0;

    while (contnum < 10)
    {
        contnum++;

        printf("Ingrese un numero: ");
        scanf("%f", &numero);

        if (numero > 0)
        {
            contpost++;
        }
        else
        {
            contneg++;
        }
    }

    printf("Cantidad de numeros mayores a cero ingresados : %.2f\nCantidad de numeros menores a cero ingresados: %.2f", contpost, contneg);
    return 0;
}
