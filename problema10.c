/* Caren Fernanda Gonzalez Ramos
Tarea2  Problema10 */

#include <stdio.h>

int main() {
    int i;
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0; 

    printf("--- Contador de Números Positivos, Negativos y Ceros ---\n");
    printf("Por favor, ingrese 100 números enteros.\n");

    for (i = 1; i <= 100; i++) {
        printf("Ingrese el número %d de 100: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++; 
        } else if (numero < 0) {
            negativos++; 
        } else {
            nulos++; 
        }
    }

    printf("\n=========================================\n");
    printf("Análisis completado:\n");
    printf("Números Positivos: %d\n", positivos);
    printf("Números Negativos: %d\n", negativos);
    printf("Números Nulos (cero): %d\n", nulos);
    printf("=========================================\n");

    return 0;
}
