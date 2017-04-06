#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(i=1;i<=numero;i++)
    {
        if( i%3 == 0)
    {
        printf("%d\n",i);
    }
    }
    return 0;
}
