#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0;
    int i = 0;

    for (i=0; i <=100;i++)
    {
        if(i % 2 == 0)
        {

        printf("\n%d es Par", i);
         numero++;
        }
        }

    printf("\nTotal de numeros pares entre 0 y 100: %d\n", numero);

    return 0;
}
