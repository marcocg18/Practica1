#include <stdio.h>
#include <stdlib.h>

double calcular_pi_leibniz(int iteraciones) {
    double pi = 0.0;
    int signo = 1;
    
    for (int i = 0; i < iteraciones; i++) {
        double termino = 4.0 / (2 * i + 1);
        pi += signo * termino;
        signo *= -1;  // Alternar signo
    }
    
    return pi;
}

int main() {
    int iteraciones;
    
    printf("Calculo de PI usando la serie de Leibniz\n");
    printf("Ingrese el numero de iteraciones (n): ");
    scanf("%d", &iteraciones);
    
    if (iteraciones <= 0) {
        printf("Error: El numero de iteraciones debe ser positivo.\n");
        return 1;
    }
    
    double pi = calcular_pi_leibniz(iteraciones);
    
    printf("PI aproximado con %d iteraciones: %.15f\n", iteraciones, pi);
    printf("PI real:                        3.141592653589793\n");
    
    return 0;
}