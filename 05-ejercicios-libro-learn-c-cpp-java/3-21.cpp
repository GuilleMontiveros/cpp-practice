#include<stdio.h>
main(){
int horas;
float salario, pago;

printf( "Introduzca el No. de horas laboradas (-1 para terminar): " );
scanf( "%d", &horas);

while ( horas != -1 ){
    printf( "Introduzca el pago por hora del emplado: " );
    scanf("%f", &pago);

    if ( horas < 40) {
        salario = horas * pago;
        }
        else {
            // Pago con horas extras: 40 horas a tarifa normal + horas adicionales a "hora y media"
            salario = (40 * pago) + ((horas - 40) * (pago * 1.5));
    }
    printf( "El salario es: $%.2f\n\n", salario );
    printf( "Introduzca el No. de horas laboradas (-1 para terminar): " );
    scanf( "%d", &horas);


}

return 0;
}
