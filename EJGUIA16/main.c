#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    if(numero < 0 )
    {
        printf("\nEl numero ingresado es negativo");
    }
    else
    {
        printf("\nEl numero ingresado es positivo");
    }

    return 0;
}
