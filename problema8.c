#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int num1, num2;
    int divisor_candidato;
    int dividendo_candidato;

 
    printf("Ingrese el primer número entero: ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    printf("Ingrese el segundo número entero: ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    if (num1 == 0 && num2 == 0) {
        printf("\nAmbos números son cero. No se puede determinar la divisibilidad de esta manera.\n");
    } 
    else if (num1 == 0) {
       
        printf("\nEl número 0 no es divisor de %d.\n", num2);
    } 
    else if (num2 == 0) {
        
        printf("\nEl primer número (%d) es divisor del segundo (0).\n", num1);
    } 
    else {
       
        if (abs(num2) % abs(num1) == 0) {
            printf("\nEl primer número (%d) ES divisor del segundo (%d).\n", num1, num2);
        } 
        
        else if (abs(num1) % abs(num2) == 0) {
            printf("\nEl segundo número (%d) ES divisor del primero (%d).\n", num2, num1);
        }
        
        else {
            printf("\nNinguno de los números es divisor del otro.\n");
        }
    }

    return 0;
}
