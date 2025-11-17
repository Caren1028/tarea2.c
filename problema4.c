/* Caren Fernanda gonzalez Ramos
Tarea2 Problema4 */

#include <stdio.h>

int main()
{    
    double capital_inicial;
    double tasa_interes; 
    double interes_ganado;
    double monto_final;

    printf("Ingrese el monto de dinero inicial invertido: ");
    scanf("%lf", &capital_inicial);
    printf("Ingrese la tasa de interes mensual (en formato decimal, ej: 0.05): ");
    scanf("%lf", &tasa_interes);

          interes_ganado = capital_inicial * tasa_interes;
          monto_final = capital_inicial + interes_ganado;
  
    printf("\n--- Resultado de la Inversion Mensual ---\n");
    printf("Capital Inicial: $%.2f\n", capital_inicial);
    printf("Interes Ganado: $%.2f\n", interes_ganado);
    printf("Monto total al finalizar el mes: $%.2f\n", monto_final);
    printf("------------------------------------------\n");

    return 0;
}
