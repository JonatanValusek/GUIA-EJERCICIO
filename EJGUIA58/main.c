#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[10];
    int i;

    for(i=0; i < 10; i++)

    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero[i]);
    }
     for(i=0; i < 10; i++)
     {
         printf("%d\n", numero[i]);
     }


    return 0;
}
