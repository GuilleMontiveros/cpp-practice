#include <stdio.h>

int main() {
    int edad;
printf( "Introduzca una edad: ");
scanf( "%d", &edad);
 if (edad <=12 ) {
        printf("Es un niño :%d\n", edad);
    }
    else if (edad <=17 && edad > 12) {
        printf("Es Adolescente :%d\n", edad);
    }
    else  {
        printf("Es adulto:%d\n", edad);
    }

return 0;
}
