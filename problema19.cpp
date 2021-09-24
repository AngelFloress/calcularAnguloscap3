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
    float perimetro;
    // Solicitar los valores de los lados por pantalla
    printf("Lado A: ");
    scanf(" %f",&a);
    printf("Lado B: ");
    scanf(" %f",&b);
    printf("Lado C: ");
    scanf(" %f",&c);
    // Realizamos el calculo del perimetro
    perimetro = a+b+c;
    // Visualizamos los resultados
    printf("Perimetro : %.2f\n",perimetro);
    return 0;
}
