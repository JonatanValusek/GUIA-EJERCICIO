#include <stdio.h>
#include <stdlib.h>

int main()
{
    char seguir = 's' ;
    float peso=0;
    int pesoHasta80=0, pesoMas80=0;

   while (seguir =='s')
    {
        printf("\nIngrese el peso de un empleado: ");
        scanf("%f", &peso);

        if (peso <= 80)
        {
            pesoHasta80++;
        }
        else
        {
            pesoMas80++;
        }
         printf("\nDesea seguir? s/n: ");
         seguir = getch();

    }
        printf("\nHay %d empleados con peso menor o igual a 80Kg",pesoHasta80);
        printf("\nHay %d empleados con peso mayor a 80Kg",pesoHasta80);
    return 0;
}
