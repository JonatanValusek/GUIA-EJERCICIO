#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[50];
}eAlumno;





int main()
{
    eAlumno miAlumno, *p;
    p=&miAlumno;
     p->legajo=7;

    printf("legajo = : %d",p->legajo);


    return 0;
}
