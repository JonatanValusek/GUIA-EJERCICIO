#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int flagnumero=0;
    int max=0;
    int i;

    for(i = 0; i < 3; i++)
        {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);

    if(flagnumero == 0 || numero > max)
            {
            max = numero;
            flagnumero = 1;
            }
        }
        printf("\nEl numero maximo ingresado es  %d: ",max);

    return 0;
}
