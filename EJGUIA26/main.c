#include <stdio.h>
#include <stdlib.h>

int main()
{
    char seguir;

    printf("desea seguir");
    seguir=getche();

    while (seguir!='s'|| seguir!='n');

    {
        printf("Error ingrese s ó n");
        seguir=getche();
    }





    printf("\nusted salio del programa");
    system("pause");


    return 1;
}
