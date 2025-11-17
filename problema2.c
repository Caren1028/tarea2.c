/* Caren Fernanda gonzalez Ramos
Tarea2 Porblema2 */

int main() 
{
    double radio;
    double area;
    double circunferencia;
    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);
            area = PI * radio * radio;
            circunferencia = 2 * PI * radio;
    printf("\n--- Resultados del Circulo ---\n");
    printf("Radio: %.2f\n", radio);
    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("------------------------------\n");

    return 0;
}
