#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarVocales(char* );

int main()
{
    char texto[100];
    int cantidad;

    printf("Ingrese un texto: ");
    gets(texto);

    cantidad=contarVocales(texto);


    printf("En el texto hay %d vocales",cantidad);

    return 0;
}


int contarVocales(char* texto)
{

    int i,cont=0;
    char caracter;

    for(i=0;i<strlen(texto);i++)
    {
        caracter= tolower(*(texto+i));
        if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u')
        {
            cont++;
        }

    }
return cont;
}



