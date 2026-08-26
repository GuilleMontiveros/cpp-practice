#include<stdio.h>
int main ()
{
   float litros, kilometros, litrosTotales = 0, kilometrosTotales = 0;
       printf( "Ingrese los litros utilizados (-1 para terminar): " );
       scanf("%f", &litros);
    while (litros !=-1){
        printf( "Ingrese los kilometros conducidos: " );
        scanf("%f", &kilometros);
        printf( "Los kilometros por litro de este tanque fueron %f\n",
            kilometros/litros );
      litrosTotales += litros;
      kilometrosTotales += kilometros;

        printf( "Introduzca los litros utilizados (-1 para terminar): " );
         scanf("%f",&litros);
    }
         if (litrosTotales !=0)
            printf( "El Promedio general de kilometros/litros fue %f\n: ",
                   kilometrosTotales/litrosTotales );

         return 0;


}




