#include <stdio.h>

int main(void) {
    int mes, dia;

    // Pedimos los datos al usuario
    printf("Ingrese el número de mes (1-12): ");
    scanf("%d", &mes);
    printf("Ingrese el día (1-31): ");
    scanf("%d", &dia);

    // Evaluamos las estaciones del año en el hemisferio norte
    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia <= 20)) {
        printf("La estación es: Invierno\n");
    }
    else if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia <= 20)) {
        printf("La estación es: Primavera\n");
    }
    else if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia <= 20)) {
        printf("La estación es: Verano\n");
    }
    else if ((mes == 9 && dia >= 21) || mes == 10 || mes == 11 || (mes == 12 && dia <= 20)) {
        printf("La estación es: Otoño\n");
    }
    else {
        printf("Fecha inválida ingresada.\n");
    }

    return 0;
}
