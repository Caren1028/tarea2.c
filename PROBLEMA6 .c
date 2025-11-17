/*Caren Fernada Gonzalez ramos
Tarea2 Problema6 */

#include <stdio.h>

int main() {
    
    double sueldo_actual;
    double aumento;
    double sueldo_nuevo;
  
    const double UMBRAL = 1000.00;
    const double TASA_AUMENTO_ALTO = 0.15; // 15%
    const double TASA_AUMENTO_BAJO = 0.12; // 12%
  
    printf("Ingrese el sueldo actual del trabajador: $");
    scanf("%lf", &sueldo_actual);

    if (sueldo_actual < UMBRAL) {
       
        aumento = sueldo_actual * TASA_AUMENTO_ALTO;
        printf("\nEl sueldo actual es inferior a $%.2f. Se aplica un aumento del 15%%.\n", UMBRAL);
    } else {
        
        aumento = sueldo_actual * TASA_AUMENTO_BAJO;
        printf("\nEl sueldo actual es igual o superior a $%.2f. Se aplica un aumento del 12%%.\n", UMBRAL);
    }

         sueldo_nuevo = sueldo_actual + aumento;

    printf("\n--- Resumen del Aumento ---\n");
    printf("Sueldo Actual: $%.2f\n", sueldo_actual);
    printf("Monto del Aumento: $%.2f\n", aumento);
    printf("**Nuevo Sueldo: $%.2f**\n", sueldo_nuevo);
    printf("---------------------------\n");

    return 0;
}
