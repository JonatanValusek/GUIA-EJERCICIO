#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numero1= 67.53, numero2= 65.42, resultado;

    resultado= numero1 - numero2;

    if (resultado < 0)
    {
        printf("Resultado negativo");
    }
    else
    {
        printf("Resultado positivo");
    }

    return 0;
}
