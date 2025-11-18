/*Caren Fernanda gonzalez Ramos
Tarea2 Problema16 */

#include <stdio.h>

#define TAMANO 100 // Definimos el tamaño fijo del arreglo

int main() {
    int pares[TAMANO]; 
    int i;             
    int valor_par = 2; 

    printf("--- Almacenando los 100 Primeros Números Pares ---\n")
    
    for (i = 0; i < TAMANO; i++) {
        
        pares[i] = valor_par;
        valor_par += 2; 
    }

  
    printf("\nContenido del Arreglo (100 Pares):\n");
    printf("{");
    
    for (i = 0; i < TAMANO; i++) {
        printf("%d", pares[i]);
        
        if (i < TAMANO - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    printf("\nEl último número par almacenado es: %d\n", pares[TAMANO - 1]);

    return 0;
}
