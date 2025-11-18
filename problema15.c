/*Caren Fernanda Gonzalez Ramos
Tarea2 Problema15*/

#include <stdio.h>

int main() {
   
    int mi_arreglo[] = {10, -5, 0, 25, -12, 0, 7, -3};
    
    int tamano = sizeof(mi_arreglo) / sizeof(mi_arreglo[0]);
  
        int i;
        int positivos = 0;
        int negativos = 0;
        int nulos = 0;

    printf("--- Clasificación de Elementos del Arreglo ---\n");
    printf("Arreglo analizado (Tamano: %d)\n", tamano);

    for (i = 0; i < tamano; i++) {
        int numero = mi_arreglo[i]; 

        
        if (numero > 0) {
            positivos++; 
        } else if (numero < 0) {
            negativos++; 
        } else {
            nulos++; 
        }
    }

    printf("\n===================================\n");
    printf("Resultados del conteo:\n");
    printf("  Positivos: %d\n", positivos);
    printf("  Negativos: %d\n", negativos);
    printf("  Nulos (Ceros): %d\n", nulos);
    printf("===================================\n");

    return 0;
}
