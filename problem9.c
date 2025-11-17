/* Caren Fernanda gonzalez ramos 
TAREA2 PROBLEMA9 */

#include <stdio.h>

int main() {
    int N;
    int i = 1; 

    printf("Ingrese un número entero N para ver su tabla de multiplicar: ");
    scanf("%d", &N);

    printf("\n--- Tabla de Multiplicar del %d ---\n", N);

    
    while (i <= 10) {
       
        printf("%d x %2d = %d\n", N, i, N * i);
               i++;
    }
    printf("----------------------------------\n");

    return 0;
}
