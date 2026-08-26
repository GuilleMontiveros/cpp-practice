#include<stdio.h>
int main()
{
   int cuenta ;
   float  saldo, saldoinicial, limite, cargos, creditos ;

   printf( "Introduzca el numero de cuenta (-1 para terminar): " );
   scanf( "%d" , &cuenta );

  while (cuenta != -1){
     printf( "Introzuca el saldo inicial: " );
     scanf( "%f",&saldoinicial );
     printf( "Introduzca el total de cargos: ");
     scanf("%f", &cargos);
     printf( "Introduzca el total de creditos: ");
     scanf("%f", &creditos);
     printf( "Introduzca limite de credito: ");
     scanf("%f", &limite);

    saldo = saldoinicial + cargos - creditos;

    if ( saldo > limite ) {
        printf( "Cuenta: %d\n", cuenta );
        printf( "Limite de credito: %.2f\n", limite );
        printf( "Saldo: %.2f\n", saldo);
        printf( "Limite de credito excedido.\n\n" );

    }

     printf(" Introduzca numero de cuenta (-1 para terminar):  ");
        scanf("%d", &cuenta);

    }

    return 0;

  }







