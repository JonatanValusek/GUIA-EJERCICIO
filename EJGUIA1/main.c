#include <stdio.h>
#include <stdlib.h>

int main()
{
   float cont=0, acum=0, media,num;

        while(cont < 5)
            {
                cont++;

        printf("Ingrese numeros: ");
        scanf("%f", &num);

                acum += num;
                media= acum / cont;

            }

    printf("EL promedio de los numeros ingresados es: %.2f\n", media);
    return 0;
}
