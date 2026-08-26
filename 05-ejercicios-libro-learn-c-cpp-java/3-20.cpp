#include<stdio.h>
main()
{
    float tasa, prestamo, interes;
    int dias;

    printf( "Introduzca el monto del prestamo (-1 para terminar): " );
    scanf( "%f", &prestamo);

    while ( prestamo !=-1 ) {
        printf( "Introduzca la tasa de interes: ");
        scanf( "%f", &tasa );
        printf( "Introduzca el periodo del prestamo en dias : " );
        scanf( "%d", &dias);
        interes = prestamo * tasa * dias / 365;
        printf("El monto del interes es $%.2f\n\n", interes);
        // Se vuelve a solicitar el monto del préstamo para la siguiente iteración
        printf("Introduzca el monto del prestamo (-1 para terminar): ");
        scanf("%f", &prestamo);

    }

 return 0;

}
