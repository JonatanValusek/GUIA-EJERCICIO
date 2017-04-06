#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int numero1 = 0;
    int numero2 = 0;

    printf("\nIngrese el valor de numero 1: ");
    scanf("%d", &numero1);
    printf("\nIngrese el valor de numero 2: ");
    scanf("%d", &numero2);

    printf("\nValor de numero 1 = %d\tValor de numero 2 = %d", numero1, numero2);

    numero = numero1;
    numero1 = numero2;
    numero2 = numero;

    printf("\nNuevo valor de numero 1 = %d\tValor de numero 2 = %d", numero1, numero2);

    return 0;
}
