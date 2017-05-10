#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT_PERSONA 20

typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;
}ePersona;


void inicializarArrayPersonas(ePersona arrayPersona[],int cantidadDeElementos,int valor);

int main()
{
    ePersona arrayPersona[CANT_PERSONA];
    inicializarArrayPersonas(arrayPersona,CANT_PERSONA,-1);

    int opcion;
    char seguir = 's';

    while(opcion != 5)
    {
        while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        while(opcion <0 || opcion > 5)
        {
            printf("El numero seleccionado no es un opcion, reingrese una opcion correcta.\n");
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
        case 1:
        break;

        case 2:
        break;

        case 3:


            for(int i=0;i<CANT_PERSONA;i++)
            {
               printf("legajo = : %d",p->estado)
            }
            break;
        case 4:
        break;

        case 5:
            seguir = 'n';
        break;
    }
    return 0;
}
    }
}

void inicializarArrayPersonas(ePersona arrayPersonas[],int cantidadDeElementos,int valor)
{
    int* pP;
    pP=arrayPersonas;

    for(i=0;i<cantidadDeElementos;i++)
    {
        (pP+i)->estado=valor;
    }
}


