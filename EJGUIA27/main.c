#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float lado,suma;
    float ladoUno;
    float ladoDos;
    float ladoTres;
    float max;
    int i=0;
    int flagLado=0;



            printf("\nIngrese el lado de un triangulo: ");
            scanf("%.2f",&ladoUno);

            printf("\nIngrese el lado de un triangulo: ");
            scanf("%.2f",&ladoDos);

            printf("\nIngrese el lado de un triangulo: ");
            scanf("%.2f",&ladoTres);

            suma=ladoUno + ladoDos;


            if (suma < ladoTres)
            {
                printf("los numeros ingresados no forman un triangulo");
            }





    return 0;
}
