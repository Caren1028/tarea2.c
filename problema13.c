/* Caren Fernanda Gonzalez Ramos
Tarea2 problema13 */

#include <stdio.h>

int main() {
  
    int mi_arreglo[] = {10, 5, 8, 20, 15};
    int tamano = sizeof(mi_arreglo) / sizeof(mi_arreglo[0]); 
           int suma = 0; 
           int i;        
    printf("--- Suma de Elementos de un Arreglo ---\n");
    printf("Elementos del arreglo: {");
    
    for (i = 0; i < tamano; i++) {
       
        printf("%d", mi_arreglo[i]);
        if (i < tamano - 1) {
            printf(", ");
        }
         suma += mi_arreglo[i]; 
    }
    printf("}\n");
    printf("----------------------------------------\n");
    printf("El tamaño del arreglo es: %d\n", tamano);
    printf("La suma total de los elementos es: %d\n", suma);
    printf("----------------------------------------\n");

    return 0;
}
