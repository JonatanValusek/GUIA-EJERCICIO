#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 20
#define B 40

int main()
{
    char nombre[A];
    char apellido[A];
    char apellidoYNombre[B];
    int i;


        printf("Ingrese su nombre: ");
        gets(nombre);

        printf("Ingrese su apellido: ");
        gets(apellido);

        strcpy(apellidoYNombre,apellido);
        strcat(apellidoYNombre, ", ");
        strcat(apellidoYNombre, nombre);

        strlwr(apellidoYNombre);
        apellidoYNombre[0]=toupper(apellidoYNombre[0]);

        for(i=0;i<strlen(apellidoYNombre);i++)
        {
            if(apellidoYNombre[i]==' ')
        {
            apellidoYNombre[i+1]=toupper(apellidoYNombre[i+1]);
        }
        }

             printf("Usted se llama: %s",apellidoYNombre);

      return 0;
}
