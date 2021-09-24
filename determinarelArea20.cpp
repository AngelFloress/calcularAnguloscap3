# calcularAnguloscap3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaramos la variables a utilizar
    float a;
    float b;
    float c;
    float area;
    float semiperimetro;
    // Solicitar los valores de los lados por pantalla
    printf("Lado A: ");
    scanf(" %f",&a);
    printf("Lado B: ");
    scanf(" %f",&b);
    printf("Lado C: ");
    scanf(" %f",&c);
    // Realizamos el calculo del semiperimetro
    semiperimetro = (a+b+c)/2;
    // Realizamos el calculo del area
    area = sqrt(semiperimetro*(semiperimetro-a)*(semiperimetro-b)*(semiperimetro-c));
    // Visualizamos los resultados
    printf("Area : %.2f",area);
    return 0;
}
