#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contnum=0;
    int suma=0;
    int producto=1;
    int numero;

    while(contnum< 10)
    {
        contnum++;

        printf("\nIngrese un numero que distinto de 0: ");
        scanf("%d", &numero);

        while(numero==0)
        {
            printf("\nIngrese un numero que distinto de 0: ");
            scanf("%d", &numero);
        }

          if (numero > 0)
          {
              suma += numero;
          }
          else
            {
                producto *= numero;
            }
    }

    printf("\nLa suma de los numeros positivos ingresados es: %d\n", suma);
    printf("\nEl producto de los numeros negativos ingresados es: %d\n", producto);

    return 0;
}
