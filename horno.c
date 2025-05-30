//Programa: EcuacionCuadratica
//Descripción: Captura los valores de temperatura actual, la temperatura deseada y la constante.
//             para encontrar el valor de la potencia necesaria para mantener la temperatura
//             dentro del rango deseado.
//Autor(es): Sergio Andrés Rincón Serna
//Fecha: 17/05/2025
#include <stdio.h>
#include <math.h>

int main()
{
    float p, t1, t2, k;
    printf("Bienvenido\n");
    printf("Ingrese la temperatura actual:\n");
    scanf("%f", &t1);
    printf("Ingrese la temperatura deseada\n");
    scanf("%f", &t2);
    printf("Ingrese la constante:\n");
    scanf("%f", &k);
    p = k * (t1 - t2);
    printf("la potencia necesaria para mantener la temperatura dentro del rango deseado es: %.2f\n", p);
    return 0;
}
