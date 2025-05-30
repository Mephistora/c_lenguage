//Programa: EcuacionCuadratica
//Descripción: Captura tres valores y los compara entre ellos para identificar al mayor entre los 3. 
//Autor(es): Sergio Andrés Rincón Serna
//Fecha: 23/04/2025

#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c;
    printf("Ingrese 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b) && (b < c)){
        printf("%d es el numero mayor", c);
    }
    if ((a < b) && (b > c)){
        printf("%d es el numero mayor", b);
    }
    if ((a > b) && (a > c)){
        printf("%d es el numero mayor", a);
    }
}