/*
Programa: Piso
Descripción: Calcula cuantas cajas de baldosa se necesitan para un piso, ademas del costo. 
Autor(es): Sergio Andrés Rincón Serna
Fecha: 09/04/2025
*/
#include <stdio.h>
#include <math.h>
int main (){
    float An, Lar, Baldoza, Area, Val, ValTotal, TotalBaldozas;
    printf("Bienvenido\n");  /*Muestra un saludo en pantalla*/
    printf("Ingrese el largo del piso:\n");
    scanf("%f", &Lar); /*Captura la variable largo*/
    printf("Ingrese el ancho del piso:\n");
    scanf("%f", &An); /*Captura la variable ancho*/
    Area = (An * Lar); /*Encuentra la variable area a traves de multiplicar ancho por largo*/
    Baldoza = 2.26; /*Es el valor constante de las baldozas*/
    TotalBaldozas = (Area/Baldoza); /*Halla el valor total de baldozas necesarias*/
    printf("Ingrese el valor de la caja de baldozas:\n");
    scanf("%f", &Val); /*Captura el valor de la caja de baldozas*/
    ValTotal = Val * TotalBaldozas; /*Captura el valor total*/
    printf("Usted necesita %.2f Cajas de Baldozas\n", TotalBaldozas); 
    printf("Y Tendria un costo de $%.2f ", ValTotal); /*La salida de hallados*/
}