/*Caren Fernanda gonzalez ramos
Tarea2  Problema1 */

int main() 
{   
    double num1, num2;
    double suma, resta, multiplicacion;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
          suma = num1 + num2;
          resta = num1 - num2;
          multiplicacion = num1 * num2;
    printf("\n--- Resultados ---\n");
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", multiplicacion);
    printf("------------------\n");

    return 0;
}
