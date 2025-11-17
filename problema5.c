/* Caren Fernanda Gonzalez Ramos
Tarea2 Problema5 */

#include <stdio.h>

int main() {
    const double TOTAL_DESCUENTO = 2500.00;
    const double TASA_DESCUENTO = 0.08; // 8%
    double monto_compra;
    double descuento_aplicado = 0.0;
    double monto_a_pagar;
  
         printf("Ingrese el monto total de la compra: $");
         scanf("%lf", &monto_compra);
  
  if (monto_compra > TOTAL_DESCUENTO) 
  {
        descuento_aplicado = monto_compra * TASA_DESCUENTO;
          printf("\n¡Felicidades! Se ha aplicado un descuento del 8%% por superar los $%.2f.\n", TOTAL_DESCUENTO);
    } else {   
          printf("\nEl monto es inferior a $%.2f, por lo tanto, no aplica descuento.\n", TOTAL_DESCUENTO);     
    }
    monto_a_pagar = monto_compra - descuento_aplicado;

    printf("\n--- Resumen de la Compra ---\n");
    printf("Monto Original: $%.2f\n", monto_compra);
    printf("Descuento Aplicado: $%.2f\n", descuento_aplicado);
    printf("**Monto Final a Pagar: $%.2f**\n", monto_a_pagar);
    printf("----------------------------\n");

    return 0;
}
