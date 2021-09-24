# calcularAnguloscap3
#include <iostream>

#include <cstdlib>

using namespace std;

int lado;

int area;

int main(){

    cout << "Ingrese la medida de un lado del cadrado" << endl;

    cin >> lado; 

    area=lado*lado; // Hacemos esta la operacion

    cout << "El area de su cuadrado es: " << area << endl;

system("pause");

return 0;

}
