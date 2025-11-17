/*Caren fernanda Gonzalez ramos 
tarea2 problema11 */

#include <stdio.h>

int main() {
    int suma = 0; 
    int i;        

    printf("--- Calculando la suma de números pares entre 10 y 50 ---\n");
   
for (i = 10; i <= 50; i += 2) {
        suma = suma + i;
    }
    printf("\nLa suma de los números pares (10 + 12 + ... + 50) es: %d\n", suma);
    printf("----------------------------------------------------------\n");

  return 0;
}
