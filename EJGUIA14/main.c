#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acumMod3=0;
    int i;

    for(i=1; i<=100;i++)
    {
        if(i%4 == 0)
        {
        printf("\n%d",i);
        acumMod3 += i;
        }


    }printf("\n\nel total de la suma de esta serie es: %d",acumMod3);
    return 0;
}
