#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
int main()
{

    float radio = 5.5, circunf, area;

    circunf=2*PI*radio;
    area= PI*radio*radio;

    printf("La circunferencia es igual a : %.3f",circunf);
    printf("\nEl area es igual a : %.3f",area);

    return 0;
}
