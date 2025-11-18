/* Caren Fernanda Gonzalez ramos
Tarea2 Problema14  */

#include <stdio.h>

int main() {
  
    int mi_arreglo[] = {15, 8, 22, 15, 4, 15, 9, 8, 22};
    int tamano = sizeof(mi_arreglo) / sizeof(mi_arreglo[0]);
    
    int numero_buscado;
    int contador = 0;   
    int i;              
  
    printf("--- Conteo de Ocurrencias en Arreglo ---\n");
    printf("Arreglo de entrada: {15, 8, 22, 15, 4, 15, 9, 8, 22}\n");
    printf("Ingrese el número entero que desea buscar: ");
    scanf("%d", &numero_buscado);


    for (i = 0; i < tamano; i++) {
     
        if (mi_arreglo[i] == numero_buscado) {
           contador++;
        }
    }

  
    printf("\n----------------------------------------\n");
    printf("El número %d se encuentra %d veces en el arreglo.\n", numero_buscado, contador);
    printf("----------------------------------------\n");

    return 0;
}
