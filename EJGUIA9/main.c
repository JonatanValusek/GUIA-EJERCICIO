#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[30];
    char *p;
    int letras_a=0,letras_e=0,letras_i=0;
    int letras_o=0,letras_u=0;



    printf( "Ingrese un texto hasta 20 caracteres: " );
    gets(texto);

    p = texto;
    while (*p != '\0')
    {
        if(*p == 'a') letras_a++;
        if(*p == 'e') letras_e++;
        if(*p == 'i') letras_i++;
        if(*p == 'o') letras_o++;
        if(*p == 'u') letras_u++;
        p++;
    }
    printf( "En el texto hay %i letras A\n", letras_a );
    printf( "\nEn el texto hay %i letras E\n", letras_e );
    printf( "\nEn el texto hay %i letras I\n", letras_i );
    printf( "\nEn el texto hay %i letras O\n", letras_o );
    printf( "\nEn el texto hay %i letras U\n", letras_u );


    return 0;
}
