/*
Programa: EcuacionCuadratica
Descripción: Captura tres valores y los opera con la ecuacion cuadratica general. 
Autor(es): Sergio Andrés Rincón Serna
Fecha: 23/04/2025
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2, discriminante; /*Defino las variables como reales*/
    printf("Bienvenido\n"); /*Muestra un saludo*/
    printf("Ingrese la variable a:\n");
    scanf("%f", &a); /*capturo la variable a*/
    printf("Ingrese la variable b:\n");
    scanf("%f", &b); /*capturo la variable b*/
    printf("Ingrese la variable c:\n");
    scanf("%f", &c); /*capturo la variable c*/
    if (a == 0){
        printf("No se puede dividir entre cero"); /*compruebo que la variable a no sea cero*/
        return 1;
    }
    discriminante = b * b * - 4 * a * c;
    if (discriminante > 0){
        x1 = (-b + sqrt(discriminante))/(2 * a); /*realizo la ecuacion cuadratica general*/
		x2 = (-b - sqrt(discriminante))/(2 * a); /*realizo la ecuacion cuadratica general*/
        printf("El valor de x1 es %.2f\n", x1); /*muestro los valores de salida*/
        printf("El valor de x2 es %.2f\n", x2); /*muestro los valores de salida*/
    }
    else if (discriminante == 0) {
        // Raíz real única (multiplicidad 2)
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    } 
    else {
        // Raíces complejas (discriminante < 0)
        float parte_real = -b / (2 * a);
        float parte_imag = sqrt(-discriminante) / (2 * a);  // Usamos -discriminante
        printf("x1 = %.2f + %.2fi\n", parte_real, parte_imag);
        printf("x2 = %.2f - %.2fi\n", parte_real, parte_imag);
    }
    return 0;
}

    /*Este ejercicio tiene la particularidad de que el discriminante de una ecuacion cuadratica*/
    /*b^2 - 4ab puede tener 3 soluciones posibles, una positiva, una negativa y una igual a cero*/
