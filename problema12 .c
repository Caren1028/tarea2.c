/*Caren Fernanda Gonzalez ramos
Tarea2 Problema12 */

#include <stdio.h>

int main() {
    int N;
    long long producto = 1; 
    int i;
    
    printf("Ingrese un número entero N (el límite del producto): ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Error: Ingrese un número natural (entero positivo o cero).\n");
        return 1;
    }

    if (N == 0 || N == 1) {
        producto = 1;
    }   else 
            {
        for (i = 1; i <= N; i++) { /i
               producto = producto * i;
        }
    }

    printf("\n----------------------------------------\n");
    printf("El producto de los primeros %d números naturales (%d!) es: %lld\n", N, N, producto);
    printf("----------------------------------------\n");

    return 0;
}
