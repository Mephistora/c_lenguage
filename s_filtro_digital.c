//Programa: EcuacionCuadratica
//Descripción: Captura los valores de resistencia y capacitancia y los opera para hayar Hz. 
//Autor(es): Sergio Andrés Rincón Serna
//Fecha: 17/05/2025
#include <stdio.h>
#include <math.h>

int main(){
    float fc, r, c;
    printf("Bienvenido\n");
    printf("Ingrese el valor de el valor de la resistencia (Ohm):\n");
    scanf("%f", &r);
    printf("Ingrese el valor de la capacitancia (Farad):\n");
    scanf("%f", &c);
    fc = 1 / (2 * 3.1416 * r * c);
    printf("La recuencia de corte es: %.2f Hz\n", fc);
    return 0;
}