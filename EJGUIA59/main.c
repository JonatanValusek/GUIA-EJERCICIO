#include <stdio.h>
#include <stdlib.h>
#define A 20

int main()
{
    int numero[A]={53,65,58,95,100,8,6,75,14,69,32,24,3,99,526,418,4,85,321,101};
    int i,j;
    int auxNumero=0;
    int numeroMax=0;


     for(i=0; i <= A-1; i++)
     {
         for(j=i+1; j<A; j++)
         {
             if(numero[i]<numero[j])
             {
                auxNumero = numero[i];
                numero[i] = numero[j];
                numero[j] = auxNumero;
             }
         }
     }
         numeroMax = numero[0];

         printf("\nEl numero maximo ingresado es: %d",numeroMax);

         for(i=0; i<A-1; i++)
    {
        printf("\n--> %d", numero[i]);
    }



      return 0;
}
