#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numero1= 25.36, numero2 = 45.53, producto, cuadrado;

    producto = numero1 * numero2;

    cuadrado= numero1 * numero1;


    printf("El resultado del producto de %.3f x %.3f es igual a: %.3f",numero1, numero2, producto);
    printf("\nEl resultado del cuadrado de  %.3f es: %.3f\n", numero1,cuadrado);
    return 0;
}
