# calcularAnguloscap3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double R=0;
    double Area =0;
    const double pi = 3.141593;

   //Datos
    printf("Introduzca el radio de la esfera, en metros: ");
    scanf( R);

    //cálculo
    Area = 4/3 * pi * pow(R, 3);
    printf("Area de una esfera", Area);
    return 0;
}
