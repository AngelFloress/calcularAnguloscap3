# calcularAnguloscap3

#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14159265 // nuNcA cAmbieZz we!!
int main()
{
    float a, b, c, A, B, C;
    cout <> a;
    cout <> b;
    cout <> c;
    A = acos((b*b+c*c-a*a)/(2*b*c))*180/PI;
    B = acos((a*a+c*c-b*b)/(2*a*c))*180/PI;
    C = acos((a*a+b*b-c*c)/(2*a*b))*180/PI;
    if(A == 90 || B == 90 || C == 90)
        cout << "El triangulo es rectangulo. ";
    if(A < 90 && B < 90 && C < 90)
        cout < 90 || B > 90 || C > 90)
        cout << "El triangulo es obtusangulo. ";
    cout << "nY sus angulos son: A:" << A << " , B:" << B << " y C:" << C;

    cin.get();cin.get();
}
