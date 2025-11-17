/* Caren Fernanda Gonzalez Ramos
tarea2 problema3 */

int main() {
    double dolares;
    double pesos;

    #define TASA_CAMBIO 11.96
  
    printf("Ingrese la cantidad en dolares (USD) a convertir: ");
    scanf("%lf", &dolares);
  
       pesos = dolares * TASA_CAMBIO;
   
    printf("\n--- Resultado de la conversion ---\n");
    printf("%.2f USD equivalen a %.2f pesos.\n", dolares, pesos);
    printf("----------------------------------\n");

    return 0;
}
