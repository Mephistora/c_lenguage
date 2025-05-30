//Programa: EcuacionCuadratica
//Descripción: valida si un sensor detecta o no movimiento.
//Autor(es): Sergio Andrés Rincón Serna
//Fecha: 17/05/2025
#include <stdio.h>

int main()
{
    char camara1, camara2;
    printf("El sensor 1 detecta movimiento? (S , N): \n");
    scanf(" %c", &camara1);

    printf("El sensor 2 detecta movimiento? (S , N): \n");
    scanf(" %c", &camara2);

    if (camara1 == 's' && camara2 == 's'){
        printf("Ambos sensores detectan movimiento");
    } 
    else if (camara1 == 's' && camara2 == 'n'){
        printf("El sensor 1 detecta movimiento");
    }
    else if (camara1 == 'n' && camara2 == 's'){
        printf("El sensor 2 detecta movimiento");
    }
    else if (camara1 == 'n' && camara2 == 'n'){
        printf("ningun sensor detecta movimiento");
    }

    return 0;
}
