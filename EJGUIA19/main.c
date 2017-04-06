#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int suma=0;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for (i=0;i<=numero; i++)
    {
        suma+=i;
    }

    printf("La suma entre %d y sus antecesores es : %d:", numero, suma);
    return 0;
}
