#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,area;

    printf("Ingrese la base de un triangulo: ");
    scanf("%f",&base);

    printf("Ingrese la altura de un triangulo: ");
    scanf("%f",&altura);

    area = (base*altura)/2;

    printf("\nEl area del triangulo es:  %.3f",area);
    return 0;
}
