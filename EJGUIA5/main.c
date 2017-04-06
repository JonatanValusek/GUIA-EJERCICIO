#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero = 15.5, producto;

    if (numero < 0)
    {
        printf("ERROR, el numero debe ser mayor que cero\n");
    }
        else
            {
            producto = numero * numero;
            printf("El producto de %.2f es igual a: %.3f",numero,producto);
            }

    return 0;
}
