# calcularAnguloscap3
#include <stdio.h>
#include <math.h>
 
struct coord{
	float x;
	float y;
};

//Esta función obtiene la distancia entre dos coordenadas.
//Con ella calculo la longitud de los lados
float ObtenerDistancia (struct coord coordenada1, struct coord coordenada2){
	float d;
 
	d= sqrt(pow(coordenada2.x - coordenada1.x,2)+(pow(coordenada2.y - coordenada1.y,2)));
	return d;
}

//Esta función calcula el área de un triángulo a partir de la longitud de sus lados
//usando para ello la fórmula de Heron
float ObtenerArea(float a,float b,float c){
	float s,area;
	int retval=1;
 
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
 
int main ()
{
   struct coord coordenadas[3];
   float a,b,c,area;
   int i;
   
   /Pido las coordenadas para los tres vertices
   for (i=0;i <3;i++){
   	printf("Escribe la coordenada x%d: ",i+1);
   	scanf("%f",&coordenadas[i].x);
   	printf("Escribe la coordenada y%d: ",i+1);
   	scanf("%f",&coordenadas[i].y);
   }
   a=ObtenerDistancia(coordenadas[0],coordenadas[1]);
   b=ObtenerDistancia(coordenadas[0],coordenadas[2]);
   c=ObtenerDistancia(coordenadas[1],coordenadas[2]);
   area=ObtenerArea(a,b,c);
   printf("El area es: %f", area);
 
   getchar();
}
