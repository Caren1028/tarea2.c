/* caren fernanda gonzalez ramos
Tarea2 problema7 */

#include <stdio.h>

int main() {
    
    const double PRECIO_POR_KM = 0.23;
    const double TASA_DESCUENTO = 0.30; // 30%
    
    double distancia_ida;
    int dias_estancia;
    double distancia_total;
    double precio_base;
    double descuento_aplicado = 0.0;
    double precio_final;
  
    printf("Ingrese la distancia del viaje de ida (en km): ");
    scanf("%lf", &distancia_ida);

    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias_estancia);

           distancia_total = 2 * distancia_ida;
           precio_base = distancia_total * PRECIO_POR_KM;

   
    if (dias_estancia > 7 && distancia_total > 800) {
     
           descuento_aplicado = precio_base * TASA_DESCUENTO;
        
      printf("\n¡Descuento aplicado! Cumple con estancia > 7 dias y distancia > 800 km.\n");
    } else {
      
        printf("\nNo aplica descuento. Condiciones: Estancia > 7 dias (actual: %d) Y Distancia total > 800 km (actual: %.2f km).\n", dias_estancia, distancia_total);
    }
  
           precio_final = precio_base - descuento_aplicado;

    printf("\n--- Resumen del Ticket ---\n");
    printf("Distancia Total Recorrida: %.2f km\n", distancia_total);
    printf("Precio Base (sin descuento): $%.2f\n", precio_base);
    printf("Descuento Aplicado: $%.2f\n", descuento_aplicado);
    printf("**Precio Final del Ticket: $%.2f**\n", precio_final);
    printf("--------------------------\n");

    return 0;
}
